#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#pragma once

#include "ClapTrap.hpp"
	
class FragTrap: public ClapTrap
{
	private:

	public:

		FragTrap();
		~FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &fragtrap);
		FragTrap &operator=(const FragTrap &fragtrap);

		void	highFivesGuys(void);

};
#endif