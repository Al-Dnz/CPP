#include "AAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AAnimal::AAnimal()
{
	type = "AAnimal";
	std::cout << "🐾 A " << type << " is created." << std::endl;
}

AAnimal::AAnimal( const AAnimal & src )
{
	std::cout << "🐾 A " << type << " is created." << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AAnimal::~AAnimal()
{
	std::cout << "✝️ An " << "AAnimal" << " is destructed." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AAnimal &				AAnimal::operator=( AAnimal const & rhs )
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

void 	AAnimal::makeSound(void) const
{
    std::cout << "🔉 Bweurp!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string			AAnimal::getType(void) const
{
	return (type);
}

/* ************************************************************************** */