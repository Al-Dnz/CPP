#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	if ( this != &rhs )
	{
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Form* 	Intern::ShrubberyCreationFormGen(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form* 	Intern::RobotomyRequestFormGen(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form* 	Intern::PresidentialPardonFormGen(std::string target)
{
	return new PresidentialPardonForm(target);
}

int 	Intern::getIndex(std::string s)
{
	const std::string request_arr[3] =
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	int i = 0;
	while (i < 3)
	{
		if (s == request_arr[i])
			return i;
		i++;
	}
	return -1;
}


Form* Intern::makeForm(std::string s1, std::string s2)
{
	int index = getIndex(s1);

	_gen method[3] =
	{
		&Intern::ShrubberyCreationFormGen,
		&Intern::RobotomyRequestFormGen,
		&Intern::PresidentialPardonFormGen
	};
	if (index == -1)
	{
		std::cout << "⛔ " << s1 << ": invalid form request" << std::endl;
		return NULL;
	}
	std::cout << "🔵 Intern creates "<< s1 << " form" <<  std::endl;
	return (this->*method[index])(s2);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */