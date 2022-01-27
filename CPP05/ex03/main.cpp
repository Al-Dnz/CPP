#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern someRandomIntern;

	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf->action();
	delete rrf;
	std::cout << std::endl;

	Form* form1;
	form1 = someRandomIntern.makeForm("shrubbery creation", "Bender");
	if (form1)
	{
		form1->action();
		delete form1;
	}
	
	std::cout << std::endl;

	Form* form2;
	form2 = someRandomIntern.makeForm("presidential pardon", "Bender");
	if (form2)
	{
		form2->action();
		delete form2;
	}
	
	std::cout << std::endl;

	Form* form3;
	form3 = someRandomIntern.makeForm("shitty request", "Bender");
	if (form3)
	{
		form3->action();
		delete form3;
	}
	std::cout << std::endl;

	return 0;
}
