#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	ShrubberyCreationForm s("my_ascii_tree");
	s.action();

	RobotomyRequestForm r("bebert");
	r.action();
	r.action();
	r.action();
	r.action();

	PresidentialPardonForm p("jacky");
	p.action();

	return 0;
}
