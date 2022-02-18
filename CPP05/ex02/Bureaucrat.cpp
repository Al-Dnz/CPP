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
		const_cast<std::string&>(this->_name) = rhs.getName();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
	return o;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

void			Bureaucrat::retrograde(void)
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;

}

void			Bureaucrat::promote(void)
{
	if (_grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}


void			Bureaucrat::signForm(Form &form)
{
	if (form.getSigned() == true)
	{
		std::cout << "Form is still signed" << std::endl;
		return ;
	}
	if (_grade > form.getSignatureGrade())
	{
		std::cout << _name << "(grade " << _grade << ") can't sign " << form.getName() << " because: " << std::endl;
		throw Bureaucrat::GradeTooLowException();
	}
	else
	{
		form.setSignature();
		std::cout << _name << "(grade " << _grade << ") signs " << form.getName() <<std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


std::string		Bureaucrat::getName(void) const { return _name; }
int				Bureaucrat::getGrade(void) const { return _grade; }


/*
** -------------------------------- EXCEPTION ---------------------------------
*/

/* ************************************************************************** */