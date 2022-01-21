#include "FragTrap.hpp"  
	
FragTrap::FragTrap(void): ClapTrap()
{
	_name = "undefined";
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
} 

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "ℹ️ a fragtrap appears !" << std::endl;
	_name = name;
	_hitpoints = 100;
	_energy_points = 100;
	_attack_damage = 30;
}
	
FragTrap::~FragTrap()
{
	std::cout << "ℹ️ fragtrap "<< _name << " disappears." << std::endl;
}

FragTrap::FragTrap(FragTrap const& scavtrap)
{
	*this = scavtrap;
	std::cout << "ℹ️ FragTrap " << _name << " created by copy" << std::endl;
}

FragTrap& 	FragTrap::operator=(const FragTrap &scavtrap)
{
	std::cout << "ℹ️ FragTrap data transfer from " << scavtrap._name << " to a new fragtrap" << std::endl;
	if (this != &scavtrap) 
	{
		_name = scavtrap._name;
		_hitpoints = scavtrap._hitpoints;
		_energy_points = scavtrap._energy_points;
		_attack_damage = scavtrap._attack_damage;
	}
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "🖐  " << _name << ": give me five bro !" << std::endl;
}