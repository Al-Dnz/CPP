#include "Weapon.hpp"

const std::string&  Weapon::getType(void)
{
	return (type);
}

void Weapon::setType(std::string type_arg)
{
	type = type_arg;
}
