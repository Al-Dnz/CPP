#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("robotomy_form_for_" + target, false ,72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		Form::operator=(rhs);
		_target= rhs._target;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (_signed == false)
	{
		throw Form::UnsignedFormException();
                return ;
	}
	if ( executor.getGrade() > _execution_grade)
	{
		throw Bureaucrat::GradeTooLowException();
		return;
	}
	// generate a seed rand
	srand(time(NULL) + rand());
	
	int n = rand();
	std::cout << "🤖 Bbbrzzzzzzzzzzzzzzzzzzzz" <<std::endl;
	if ( n % 2)
		std::cout << "✅ Success: " << _target << " has been robotomized" <<std::endl;
	else
		std::cout << "❌ Fail : " << _target << " has not been robotomized" <<std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */