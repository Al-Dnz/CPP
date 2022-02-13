#include "Weapon.hpp"
	
class HumanB  
{
	private:
		std::string	name;
		Weapon		*weapon;
		bool		is_armed;

	public:

		HumanB(std::string name);
		void attack(void);
		void setWeapon(Weapon &weapon);

};