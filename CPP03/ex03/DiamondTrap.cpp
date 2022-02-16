#include "DiamondTrap.hpp"  
	
DiamondTrap::DiamondTrap(void): ClapTrap("undefined_clap_name"), ScavTrap(), FragTrap()
{
	_name = "undefined";
	ClapTrap::_name = "undefined_clap_name";
	_hitpoints = FragTrap::stored_hitpoints ;//100;
	_energy_points = ScavTrap::stored_energy_points ;//50;
	_attack_damage = FragTrap::stored_attack_damage ;//30;
} 

DiamondTrap::DiamondTrap(std::string const name_arg):ClapTrap(name_arg + "_clap_name"), ScavTrap(name_arg), FragTrap(name_arg)
{
	std::cout << "ℹ️ a DiamondTrap appears !" << std::endl;
	this->_name = name_arg;
	ClapTrap::_name = name_arg + "_clap_name";
	_hitpoints = FragTrap::stored_hitpoints ;//100;
	_energy_points = ScavTrap::stored_energy_points ;//50;
	_attack_damage = FragTrap::stored_attack_damage ;//30;
}
	
DiamondTrap::~DiamondTrap()
{
	std::cout << "ℹ️ diamondtrap "<< _name << " disappears." << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& diamondtrap)
{
	*this = diamondtrap;
	std::cout << "ℹ️ DiamondTrap " << _name << " created by copy" << std::endl;
}

DiamondTrap& 	DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
	std::cout << "ℹ️ DiamondTrap data transfer from " << diamondtrap._name << " to a new diamondTrap" << std::endl;
	if (this != &diamondtrap) 
	{
		_name = diamondtrap._name;
		_hitpoints = diamondtrap._hitpoints;
		_energy_points = diamondtrap._energy_points;
		_attack_damage = diamondtrap._attack_damage;
	}
	return *this;
}

void	DiamondTrap::attack(std::string const &target)
{
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "🚹 I am " << _name << " (" << ClapTrap::_name << ")" << std::endl;
}

std::string	DiamondTrap::getDiamondName(void) const { return this->_name; }
int			DiamondTrap::getDiamondHitpoints(void) const { return this->_hitpoints; }
int			DiamondTrap::getDiamondEneryPoints(void) const { return this->_energy_points; }
int			DiamondTrap::getDiamondAttackDamage(void) const { return this->_attack_damage; }
