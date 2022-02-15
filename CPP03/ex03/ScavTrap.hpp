#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
	
class ScavTrap:  public virtual ClapTrap
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

		void	guardGate(void);

};
#endif