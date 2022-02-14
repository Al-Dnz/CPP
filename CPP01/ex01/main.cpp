#include "Zombie.hpp"
#include <string>

int main(void)
{
	int N = 10;
	Zombie *horde = zombieHorde(N, "PNJ");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
}