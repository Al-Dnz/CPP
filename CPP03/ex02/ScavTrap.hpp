#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

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
		void 	attack(std::string const &target);

};
#endif