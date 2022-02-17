#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat(): Animal()
{
	type = "Cat";
	_brain = new Brain;
	std::cout << "😺 A " << type << " is created." << std::endl;
}

Cat::Cat( const Cat & src )
{
	std::cout << "😺 A " << type << " is created." << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete _brain;
	std::cout << "✝️ A " << type << " is destructed." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const &rhs )
{
	Animal::operator=(rhs);
    type = "Cat";
	if (this != &rhs)
		*_brain = *rhs._brain;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Cat::makeSound(void) const
{
    std::cout << "🔉 Meoowwww!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */