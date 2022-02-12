# include "Zombie.hpp"


Zombie* zombieHorde(int N, std::string name)
{
	Zombie *horde;
	std::string str;

	horde =  new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		str = name + "_" + std::to_string(i + 1);
		horde[i].set_name(str);
	}
	return horde;
}