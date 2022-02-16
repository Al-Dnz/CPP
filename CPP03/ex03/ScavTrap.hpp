#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
	
class ScavTrap:  virtual public  ClapTrap
{

	protected:
		 unsigned int	stored_hitpoints;
		 unsigned int	stored_energy_points;
		 unsigned int	stored_attack_damage;
		 
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const &scavtrap);
		ScavTrap &operator=(const ScavTrap &scavtrap);

		void 	attack(std::string const &target);
		void	guardGate(void);

};
#endif