#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern someRandomIntern;
	Bureaucrat le_prez("le_prez", 1);

	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf->execute(le_prez);
	delete rrf;
	std::cout << std::endl;

	Form* form1;
	form1 = someRandomIntern.makeForm("shrubbery creation", "Bender");
	if (form1)
	{
		form1->execute(le_prez);
		delete form1;
	}
	
	std::cout << std::endl;

	Form* form2;
	form2 = someRandomIntern.makeForm("presidential pardon", "Bender");
	if (form2)
	{
		form2->execute(le_prez);
		delete form2;
	}
	
	std::cout << std::endl;

	Form* form3;
	form3 = someRandomIntern.makeForm("shitty request", "Bender");
	if (form3)
	{
		form3->execute(le_prez);
		delete form3;
	}
	std::cout << std::endl;

	return 0;
}
