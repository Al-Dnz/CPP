#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal()
{
	type = "Wrong Animal";
	std::cout << "👾 A " << type << " is created." << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << "👾 A " << type << " is created." << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "✝️ A " << type << " is destructed." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal	&WrongAnimal::operator=( WrongAnimal const & rhs )
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

void 	WrongAnimal::makeSound(void) const
{
    std::cout << "🔉 Trolololololololo!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string			WrongAnimal::getType(void) const
{
	return (type);
}

/* ************************************************************************** */