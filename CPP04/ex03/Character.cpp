#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(std::string name): _name(name), _inventory()
{
	for (int i = 0; i < _inventory_size; i++)
		_inventory[i] = NULL;
}

Character::Character( const Character & src ): _inventory()
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character & Character::operator=(Character const & rhs)
{
	if (this != &rhs) 
	{
		_name = rhs._name;
		for (int i = 0; i != _inventory_size; ++i) 
		{
			if (_inventory[i])
				delete _inventory[i];
			if (rhs._inventory[i]) 
				 _inventory[i] = rhs._inventory[i]->clone();	
		}
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void			Character::equip(AMateria* m)
{
	for (int i = 0; i < _inventory_size; i++)
	{
		if (_inventory[i] == m)
			return;
	}
	for (int i = 0; i < _inventory_size; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return ;
		}		
	}
}

void			Character::unequip(int idx)
{
	if (idx < 0 || idx >= _inventory_size)
		return;
	if (_inventory[idx])
		_inventory[idx] = 0;
}

void			Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= _inventory_size)
		return;
	if (_inventory[idx])
		_inventory[idx]->use(target);

}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const&	Character::getName() const
{
	return _name;
}

/* ************************************************************************** */