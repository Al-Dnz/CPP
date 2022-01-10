#pragma once
# ifndef __ZOMBIE_H__
# define __ZOMBIE_H__
# include <iostream>
# include <memory>
# include <new> 
# include <string>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	set_name(std::string name);

	private:
		std::string name;

};

Zombie* zombieHorde(int N, std::string name);

#endif