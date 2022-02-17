#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog(): Animal()
{
	type = "Dog";
	_brain = new Brain;
	std::cout << "🐶 A " << type << " is created." << std::endl;
}

Dog::Dog( const Dog & src )
{
	std::cout << "🐶 A " << type << " is created." << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete _brain;
	std::cout << "✝️ A " << type << " is destructed." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	Animal::operator=(rhs);
	if (this != &rhs)
		*_brain = *rhs._brain;
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