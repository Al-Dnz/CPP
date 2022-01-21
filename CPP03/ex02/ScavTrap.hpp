#ifndef SCAVTRAP_H
#define SCAVTRAP_H
#pragma once

#include <iostream>
#include "ClapTrap.hpp"
	
class ScavTrap: public ClapTrap
{
	public:

		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &scavtrap);
		ScavTrap &operator=(const ScavTrap &scavtrap);

		void	guardGate(void);

};
#endif