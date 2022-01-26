#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(std::string name): _name(name), _inventory()
{
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
	for (int i = 0; i != _inventory_size; i++)
	{	
		unequip(i);
	}
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
		delete _inventory[idx];
}

void			Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= _inventory_size)
		return;
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