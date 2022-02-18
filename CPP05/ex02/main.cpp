#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{	
	std::cout << "\n*************************SUCCESS TESTS***************" <<std::endl;
	Bureaucrat le_prez("le_prez", 1);
	std::cout << le_prez << std::endl;

	ShrubberyCreationForm s("le_prez_ascii_tree");
	s.execute(le_prez);
	std::cout << std::endl;

	RobotomyRequestForm r("bebert");
	r.execute(le_prez);
	r.execute(le_prez);
	r.execute(le_prez);
	r.execute(le_prez);
	std::cout << std::endl;

	PresidentialPardonForm p("jacky");
	p.execute(le_prez);

	std::cout << "\n*************************FAILED TESTS***************" <<std::endl;
	Bureaucrat le_loser("le_loser", 150);
	std::cout << le_loser << std::endl;
	try
	{
			ShrubberyCreationForm s("le_loser_ascii_tree");
			s.execute(le_loser);
			std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
			RobotomyRequestForm r("bebert");
			r.execute(le_loser);
			r.execute(le_loser);
			r.execute(le_loser);
			r.execute(le_loser);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
			PresidentialPardonForm p("jacky");
			p.execute(le_loser);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}




	return 0;
}
