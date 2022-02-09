#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	type = "Dog";
	std::cout << "🐶 A dog is created." << std::endl;
}

Dog::Dog( const Dog & src )
{
	std::cout << "🐶 A dog is created." << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "✝️ A dog is destructed." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
		Animal::operator=(rhs);
    type = "Dog";
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound(void) const
{
    std::cout << "🔉 Wafwaf!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */