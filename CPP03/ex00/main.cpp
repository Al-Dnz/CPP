#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap claptrap_1("tibo");

	std::cout << "[Name] "<< claptrap_1.getName() << std::endl;
	std::cout << "[HitPoints] "<< claptrap_1.getHitpoints() << std::endl;
	std::cout << "[AttackDamage] "<< claptrap_1.getAttackDamage() << std::endl;
	std::cout << "[EnergyPoints] "<< claptrap_1.getEneryPoints() << std::endl;
	claptrap_1.takeDamage(3);
	std::cout << "[HitPoints] "<< claptrap_1.getHitpoints() << std::endl;
	claptrap_1.beRepaired(30);
	std::cout << "[HitPoints] "<< claptrap_1.getHitpoints() << std::endl;
	claptrap_1.attack("enemy base");
	std::cout << std::endl;

	ClapTrap claptrap_2 = claptrap_1;
	std::cout << "[Name] "<< claptrap_2.getName() << std::endl;
	std::cout << "[HitPoints] "<< claptrap_2.getHitpoints() << std::endl;
	std::cout << "[AttackDamage] "<< claptrap_2.getAttackDamage() << std::endl;
	std::cout << "[EnergyPoints] "<< claptrap_2.getEneryPoints() << std::endl;

	return 0;
}