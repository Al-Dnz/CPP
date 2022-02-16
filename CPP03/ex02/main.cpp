#include "FragTrap.hpp"

int main(void)
{
	FragTrap fraptrap_1("jacky");
	std::cout << std::endl;

	std::cout << "[Name] "<< fraptrap_1.getName() << std::endl;
	std::cout << "[HitPoints] "<< fraptrap_1.getHitpoints() << std::endl;
	std::cout << "[AttackDamage] "<< fraptrap_1.getAttackDamage() << std::endl;
	std::cout << "[EnergyPoints] "<< fraptrap_1.getEneryPoints() << std::endl;
	std::cout << std::endl;

	fraptrap_1.takeDamage(3);
	std::cout << "[HitPoints] "<< fraptrap_1.getHitpoints() << std::endl;
	std::cout << std::endl;
	
	fraptrap_1.beRepaired(30);
	std::cout << "[HitPoints] "<< fraptrap_1.getHitpoints() << std::endl;

	std::cout << std::endl;
	fraptrap_1.attack("enemy base");
	fraptrap_1.highFivesGuys();
	std::cout << std::endl;

	FragTrap fraptrap_2 = fraptrap_1;
	std::cout << "[Name] "<< fraptrap_2.getName() << std::endl;
	std::cout << "[HitPoints] "<< fraptrap_2.getHitpoints() << std::endl;
	std::cout << "[AttackDamage] "<< fraptrap_2.getAttackDamage() << std::endl;
	std::cout << "[EnergyPoints] "<< fraptrap_2.getEneryPoints() << std::endl;
	std::cout << std::endl;

	return 0;
}