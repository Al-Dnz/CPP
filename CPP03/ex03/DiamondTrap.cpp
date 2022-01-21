#include "DiamondTrap.hpp"  
	
DiamondTrap::DiamondTrap(void): ClapTrap("undefined_clap_name")
{
	DiamondTrap::_name = "undefined";
	DiamondTrap::_hitpoints = 100;
	DiamondTrap::_energy_points = 50;
	DiamondTrap::_attack_damage = 30;
} 

DiamondTrap::DiamondTrap(std::string const name) 
{
	std::cout << "ℹ️ a DiamondTrap appears !" << std::endl;
	DiamondTrap::_name = name;
	
	ClapTrap::_name = name + "_clap_name";
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

void	DiamondTrap::whoAmI(void)
{
	std::cout << "🚹 I am " << _name << " (" << ClapTrap::_name << ")" << std::endl;
}