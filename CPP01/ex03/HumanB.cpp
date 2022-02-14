#include "HumanB.hpp"
# include <iostream>
	
HumanB::HumanB(std::string name_arg): name(name_arg), weapon(NULL)
{
	
}

void HumanB::setWeapon(Weapon &weapon_arg)
{
	this->weapon = &weapon_arg;
}

void HumanB::attack(void)
{
	if (weapon != NULL)
		std::cout << name << " attacks with his " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon :(" << std::endl;
}