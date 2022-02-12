#include "Zombie.hpp"
#include <string>

int main(int argc, char **argv)
{
	int i;
	bool digit_input(true);

	if (argc != 3)
	{
		std::cout << "error: wrong argument number" << std::endl;
		std::cout << "usage\n./zombie [(int)Number_of_zombies] [(str)Standard_zombie_name]" << std::endl;
		return (1);
	}
	for(i = 0; argv[1][i]; i++)
		if (!isdigit(argv[1][i]))
			digit_input = false;
	if (digit_input == false)
	{
		std::cout << "error: arg is not a positive number" << std::endl;
		return (1);
	}
	std::string input = argv[1];
	int N = std::stoi(input);
	Zombie *horde = zombieHorde(N, argv[2]);
	for (i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
}