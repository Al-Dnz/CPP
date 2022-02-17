#ifndef CHARACTER_HPP
# define CHARACTER_HPP


# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter
{

	public:
		Character(std::string const name = "default_name");
		Character( Character const & src );
		~Character();
		Character &		operator=( Character const & rhs );

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);


	private:
		std::string _name;
		static const int _inventory_size = 4;
		AMateria* _inventory[_inventory_size];

};

#endif /* ******************************************************* CHARACTER_H */