#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scavtrap_1("jacky");
	std::cout << std::endl;

	std::cout << "[Name] "<< scavtrap_1.getName() << std::endl;
	std::cout << "[HitPoints] "<< scavtrap_1.getHitpoints() << std::endl;
	std::cout << "[AttackDamage] "<< scavtrap_1.getAttackDamage() << std::endl;
	std::cout << "[EnergyPoints] "<< scavtrap_1.getEneryPoints() << std::endl;

	std::cout << std::endl;
	scavtrap_1.takeDamage(3);
	std::cout << "[HitPoints] "<< scavtrap_1.getHitpoints() << std::endl;
	scavtrap_1.beRepaired(30);
	std::cout << "[HitPoints] "<< scavtrap_1.getHitpoints() << std::endl;

	std::cout << std::endl;
	scavtrap_1.attack("enemy base");
	scavtrap_1.guardGate();
	
	std::cout << std::endl;
	ScavTrap scavtrap_2 = scavtrap_1;
	std::cout << "[Name] "<< scavtrap_2.getName() << std::endl;
	std::cout << "[HitPoints] "<< scavtrap_2.getHitpoints() << std::endl;
	std::cout << "[AttackDamage] "<< scavtrap_2.getAttackDamage() << std::endl;
	std::cout << "[EnergyPoints] "<< scavtrap_2.getEneryPoints() << std::endl;
	std::cout << std::endl;
	
	return 0;
}