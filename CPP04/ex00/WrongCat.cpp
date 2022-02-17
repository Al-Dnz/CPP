#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat(): WrongAnimal()
{
	type = "Wrong Cat";
	std::cout << "😈 A wrong cat" << " is created." << std::endl;
}

WrongCat::WrongCat( const WrongCat & src )
{
	std::cout << "😈 A wrong cat" << " is created." << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "✝️ A wrong cat" << " is destructed." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	WrongAnimal::operator=(rhs);
    type = "Wrong Cat";
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongCat::makeSound(void) const
{
    std::cout << "🔉 Miaoulololololololllolol!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */