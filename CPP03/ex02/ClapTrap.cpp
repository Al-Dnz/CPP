#include "ClapTrap.hpp"  

ClapTrap::ClapTrap(void): _name("undefined"), _hitpoints(10), _energy_points(10), _attack_damage(0) {}

ClapTrap::ClapTrap(std::string name): _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ℹ️ a claptrap appears !" << std::endl;
}
	
ClapTrap::~ClapTrap()
{
	std::cout << "ℹ️ claptrap "<< _name << " disappears." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& claptrap)
{
	*this = claptrap;
	std::cout << "ℹ️ Claptrap " << _name << " created by copy" << std::endl;
};

ClapTrap& 	ClapTrap::operator=(const ClapTrap &claptrap)
{
	std::cout << "Claptrap data transfer from " << claptrap._name << " to a new claptrap" << std::endl;
	if (this != &claptrap) 
	{
		_name = claptrap._name;
		_hitpoints = claptrap._hitpoints;
		_energy_points = claptrap._energy_points;
		_attack_damage = claptrap._attack_damage;
	}
	
	return *this;
}

std::string	ClapTrap::getName(void) const { return this->_name; }
int			ClapTrap::getHitpoints(void) const { return this->_hitpoints; }
int			ClapTrap::getEneryPoints(void) const { return this->_energy_points; }
int			ClapTrap::getAttackDamage(void) const { return this->_attack_damage; }

void		ClapTrap::attack(std::string const &target)
{
	std::cout << "💥 ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage." << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "⚡️ ClapTrap " << _name << " takes " << amount << " points of damage." << std::endl;
	_hitpoints -= amount;
	if (_hitpoints < 0)
		_hitpoints = 0;
	std::cout << "ℹ️ ClapTrap " << _name << " has now " << _hitpoints << " points of life." << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "💚 ClapTrap " << _name << " is repaired with " << amount << " points of health." << std::endl;
	_hitpoints += amount;
	std::cout << "ℹ️ ClapTrap " << _name << " has now " << _hitpoints << " points of life." << std::endl;
}