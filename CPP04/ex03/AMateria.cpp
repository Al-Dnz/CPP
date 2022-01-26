#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria(std::string const & type): _type(type) {}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria(void) {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const &AMateria::getType() const { return _type;}


void AMateria::use(ICharacter& target)
{
	if (getType() == "weapon")
		std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
	else if (getType() == "medikit")
		std::cout << "*" << std::endl;

}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */