#include "ScavTrap.hpp"  
	
ScavTrap::ScavTrap(void): ClapTrap()
{
	_name = "undefined";
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 20;
} 

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ℹ️ a scavtrap appears !" << std::endl;
	_name = name;
	_hitpoints = 100;
	_energy_points = 50;
	_attack_damage = 20;
}
	
ScavTrap::~ScavTrap()
{
	std::cout << "ℹ️ scavtrap "<< _name << " disappears." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& scavtrap)
{
	*this = scavtrap;
	std::cout << "ℹ️ Scavtrap " << _name << " created by copy" << std::endl;
}

ScavTrap& 	ScavTrap::operator=(const ScavTrap &scavtrap)
{
	std::cout << "ℹ️ Scavtrap data transfer from " << scavtrap._name << " to a new scavtrap" << std::endl;
	if (this != &scavtrap) 
	{
		_name = scavtrap._name;
		_hitpoints = scavtrap._hitpoints;
		_energy_points = scavtrap._energy_points;
		_attack_damage = scavtrap._attack_damage;
	}
	return *this;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "🛡️  Scavtrap " << _name << " enters in gate_keeper mode" << std::endl;
}

void		ScavTrap::attack(std::string const &target)
{
	if (_hitpoints > 0 && _energy_points > 0)
		std::cout << "💥 ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage." << std::endl;
	else
		std::cout << "💥 ScavTrap " << _name << "does nothing because he has not enouth points" << std::endl;
}