#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	ShrubberyCreationForm s("fucking_ascii_tree");
	s.action();
	std::cout << std::endl;

	RobotomyRequestForm r("bebert");
	r.action();
	r.action();
	r.action();
	r.action();
	std::cout << std::endl;

	PresidentialPardonForm p("jacky");
	p.action();

	return 0;
}
