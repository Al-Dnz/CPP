#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	else
		_grade  = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ): _name(src._name), _grade(src._grade)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_grade = rhs.getGrade();
		//this->_name = rhs.getName();
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void			Bureaucrat::promote(void)
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;

}

void			Bureaucrat::retrograde(void)
{
	if (_grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


std::string		Bureaucrat::getName(void) const { return _name; }
unsigned int	Bureaucrat::getGrade(void) const { return _grade; }


/*
** -------------------------------- EXCEPTION ---------------------------------
*/

/* ************************************************************************** */