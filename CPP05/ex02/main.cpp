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
	le_prez.signForm(s);
	s.execute(le_prez);
	std::cout << std::endl;

	RobotomyRequestForm r("bebert");
	le_prez.signForm(r);
	r.execute(le_prez);
	r.execute(le_prez);
	r.execute(le_prez);
	r.execute(le_prez);
	std::cout << std::endl;

	PresidentialPardonForm p("jacky");
	le_prez.signForm(p);
	p.execute(le_prez);

	PresidentialPardonForm z("neuneu");
	le_prez.signForm(z);
	le_prez.executeForm(z);

	std::cout << "\n*************************FAILED UNSIGNED TESTS***************" <<std::endl;

	try
	{
			ShrubberyCreationForm s("le_prez_2_ascii_tree");
			s.execute(le_prez);
			std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
			RobotomyRequestForm r("bebert");
			r.execute(le_prez);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
			PresidentialPardonForm p("jacky");
			p.execute(le_prez);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n*************************FAILED GRADE TESTS***************" <<std::endl;

	
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

	try
	{
			PresidentialPardonForm k("neuneu_2");
			le_prez.signForm(k);
			le_loser.executeForm(k);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}




	return 0;
}
