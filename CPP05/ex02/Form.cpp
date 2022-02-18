#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(): _name("undefined_form"), _signed(false), _signature_grade(150), _execution_grade(150)
{
}

Form::Form(std::string name, bool is_signed, int s_grade, int e_grade): _name(name), _signed(is_signed), _signature_grade(s_grade), _execution_grade(e_grade)
{
	if (s_grade < 1 || e_grade < 1)
		throw Form::GradeTooHighException();
	if (s_grade > 150 || e_grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form( const Form & src ): _name(src._name), _signed(src._signed), _signature_grade(src._signature_grade), _execution_grade(src._execution_grade)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		const_cast<std::string&>(this->_name) = rhs.getName();
		this->_signed = rhs.getSigned();
		const_cast<int&>(this->_signature_grade) = rhs.getSignatureGrade();
		const_cast<int&>(this->_execution_grade) = rhs.getExecutionGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "---------------------" << std::endl;
	o << "id->" << &i << std::endl;
	o << "name->" << i.getName() << std::endl;
	o << "is_signed->" << (i.getSigned() ? "true" : "false") << std::endl;
	o << "signature_grade->" << i.getSignatureGrade() << std::endl;
	o << "execution_grade->" <<  i.getExecutionGrade() <<std::endl;
	o << "---------------------" << std::endl;

	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		Form::getName(void) const {return _name;}
bool			Form::getSigned(void) const {return _signed;}
int				Form::getSignatureGrade(void) const {return _signature_grade;}
int				Form::getExecutionGrade(void) const {return _execution_grade;}

void			Form::beSigned(Bureaucrat bureaucrat)
{
	if (_signed == true)
	{
		std::cout << _name << " is still signed" << std::endl;
		return ;
	}
	if (bureaucrat.getGrade() > _signature_grade)
	{
		std::cout << bureaucrat.getName() << " cannot sign because: ";
		throw Bureaucrat::GradeTooLowException();
	}
	else
	{
		_signed = true;
		std::cout << bureaucrat.getName() << " signs " << _name <<  std::endl;
	}
}

void			Form::setSignature() { _signed = true;}


/* ************************************************************************** */