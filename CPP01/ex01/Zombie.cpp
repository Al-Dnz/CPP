#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name << " BraiiiiiiinnnzzzZ.." << std::endl;
}

void	Zombie::set_name(std::string name_arg)
{
	name = name_arg;
}

Zombie::Zombie(void)
{
	static int	i;
	std::string	str = "unnamed_zombie_" + std::to_string(i++);

	name = str;
}

Zombie::~Zombie(void)
{
	std::cout << name << " has been destructed" << std::endl;
}
