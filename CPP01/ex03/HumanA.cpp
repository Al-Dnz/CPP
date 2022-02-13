#include "HumanA.hpp"
# include <iostream>
	
HumanA::HumanA(std::string name_arg, Weapon &weapon_arg): name(name_arg), weapon(weapon_arg)
{
		
}
	
void HumanA::attack(void)
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}