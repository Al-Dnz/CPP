#ifndef WEAPON_H
# define WEAPON_H
# pragma once


# include <iostream>
# include <string>



class Weapon
{
	public:
		const std::string	&getType(void);
		void setType(std::string type);

	private:
		std::string type;
};

#endif