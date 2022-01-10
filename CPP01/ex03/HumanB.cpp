#include "HumanB.hpp"
# include <iostream>
	
HumanB::HumanB(std::string name_arg)
{
	is_armed = false;
	name = name_arg;
}

void HumanB::take_weapon(Weapon weapon_arg)
{
	weapon = weapon_arg;
	is_armed = true;
}

void HumanB::attack(void)
{
	if (is_armed)
		std::cout << name << " attacks with his " << weapon.getType() << std::endl;
	else
		std::cout << name << " has no weapon :(" << std::endl;
}