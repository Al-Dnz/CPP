#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat(): AAnimal()
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
	AAnimal::operator=(rhs);
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