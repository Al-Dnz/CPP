#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	//Create and initialize weapons
	Weapon weapon_1;
	weapon_1.setType("shotgun");
	Weapon weapon_2;
	weapon_2.setType("flame thrower");

	//Test player 1
	HumanA player_1("Stan", weapon_1);
	player_1.attack();

	//Test player 2
	HumanB player_2("Paul");
	player_2.attack();
	player_2.setWeapon(weapon_2);
	player_2.attack();

	//Test player 3
	HumanB player_3("Jack");
	Weapon weapon_3;
	player_3.setWeapon(weapon_3);
	player_3.attack();
	weapon_3.setType("knife");
	player_3.attack();

	//Subject tests
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}

	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
		
	return 0;
}