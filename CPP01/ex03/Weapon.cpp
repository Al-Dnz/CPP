#include "Weapon.hpp"

Weapon::Weapon(std::string const type_arg)
{
	type = type_arg;
}

const std::string&  Weapon::getType(void)
{
	return (type);
}

void Weapon::setType(std::string type_arg)
{
	type = type_arg;
}
