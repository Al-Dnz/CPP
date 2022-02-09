#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	type = "Animal";
	std::cout << "🐾 An animal" << " is created." << std::endl;
}

Animal::Animal( const Animal & src )
{
	std::cout << "🐾 An animal" << " is created." << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "✝️ An animal" << " is destructed." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void 	Animal::makeSound(void) const
{
    std::cout << "🔉 Bweurp!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string			Animal::getType(void) const
{
	return (type);
}

/* ************************************************************************** */