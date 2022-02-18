#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/


PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("presidential_pardon_form_for_"+ target, false ,25, 5)
{
	_target = target;
}


PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/



PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		Form::operator=(rhs);
		_target = rhs._target;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if ( executor.getGrade() > _execution_grade)
	{
		throw Bureaucrat::GradeTooLowException();
		return;
	}
	std::cout << "⚜ " << _target << " has been forgiven by Zafod Beeblebrox" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */