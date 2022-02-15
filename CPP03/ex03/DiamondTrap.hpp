#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string _name;

	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string const name);
		DiamondTrap(DiamondTrap const &diamondtrap);
		DiamondTrap &operator=(const DiamondTrap &diamondtrap);

		void whoAmI();
};
#endif