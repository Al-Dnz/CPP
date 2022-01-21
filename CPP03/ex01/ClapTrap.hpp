#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#pragma once

#include <iostream>
	
class ClapTrap  
{
	protected:

		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;

	public:

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &claptrap);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &claptrap);

		void 		attack(std::string const &target);
		void 		takeDamage(unsigned int amount);
		void 		beRepaired(unsigned int amount);

		std::string getName(void) const;
		int			getHitpoints(void) const;
		int			getEneryPoints(void) const;
		int			getAttackDamage(void) const;

};
#endif