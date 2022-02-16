#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap:  public ScavTrap, public FragTrap
{
	private:
		std::string _name;

	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string const name);
		DiamondTrap(DiamondTrap const &diamondtrap);
		DiamondTrap &operator=(const DiamondTrap &diamondtrap);

		void attack(std::string const &target);
		void whoAmI();

		std::string	getDiamondName(void) const;
		int			getDiamondHitpoints(void) const;
		int			getDiamondEneryPoints(void) const;
		int			getDiamondAttackDamage(void) const;
};
#endif