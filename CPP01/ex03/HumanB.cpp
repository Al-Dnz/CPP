#include "HumanB.hpp"
# include <iostream>
	
HumanB::HumanB(std::string name_arg): name(name_arg), weapon(NULL), is_armed(false)
{
	
}

void HumanB::setWeapon(Weapon &weapon_arg)
{
	this->weapon = &weapon_arg;
	is_armed = true;
}

void HumanB::attack(void)
{
	if (is_armed)
		std::cout << name << " attacks with his " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon :(" << std::endl;
}