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
	player_2.take_weapon(weapon_2);
	player_2.attack();
	
	return 0;
}