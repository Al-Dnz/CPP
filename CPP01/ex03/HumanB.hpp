#include "Weapon.hpp"
	
class HumanB  
{
	private:
		Weapon		weapon;
		std::string	name;
		bool		is_armed;

	public:

		HumanB(std::string name);
		void attack(void);
		void take_weapon(Weapon weapon);

};