#include "Zombie.hpp"

void  Zombie::announce(void)
{
	std::cout << name << " BraiiiiiiinnnzzzZ.." << std::endl;
}

Zombie::Zombie(std::string name_arg)
{
	if (name_arg.empty())
		name = "undefined";
	else
		name = name_arg;
		
}

Zombie::~Zombie(void)
{
	std::cout << name << " has been destructed" << std::endl;
}
