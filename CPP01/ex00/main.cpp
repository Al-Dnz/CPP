#include "Zombie.hpp"

int main(void)
{	
	Zombie z1("polo");
	z1.announce();

	Zombie *z2;
	z2 = newZombie("jacky");
	z2->announce();
	delete z2;

	randomChump("samy");

	return (0);
}
