#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamondtrap_1("YOLOTEST");

	std::cout << "[Name] "<< diamondtrap_1.getName() << std::endl;
	std::cout << "[HitPoints] "<< diamondtrap_1.getHitpoints() << std::endl;
	std::cout << "[AttackDamage] "<< diamondtrap_1.getAttackDamage() << std::endl;
	std::cout << "[EnergyPoints] "<< diamondtrap_1.getEneryPoints() << std::endl;
	diamondtrap_1.takeDamage(3);
	std::cout << "[HitPoints] "<< diamondtrap_1.getHitpoints() << std::endl;
	diamondtrap_1.beRepaired(30);
	std::cout << "[HitPoints] "<< diamondtrap_1.getHitpoints() << std::endl;
	diamondtrap_1.attack("enemy base");
	diamondtrap_1.highFivesGuys();
	diamondtrap_1.guardGate();
	diamondtrap_1.whoAmI();
	std::cout << std::endl;

	return 0;
}
