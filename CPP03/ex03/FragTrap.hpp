#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
	
class FragTrap: public virtual ClapTrap
{
	protected:
		 unsigned int	stored_hitpoints;
		 unsigned int	stored_energy_points;
		 unsigned int	stored_attack_damage;

	public:
		FragTrap();
		~FragTrap();
		FragTrap(std::string const name);
		FragTrap(FragTrap const &fragtrap);
		FragTrap &operator=(const FragTrap &fragtrap);

		void	highFivesGuys(void);
};
#endif