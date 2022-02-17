#include "Bureaucrat.hpp"

void instanciation_exception_test(int grade)
{
	std::cout << "grade: "<< grade << std::endl;
	try
	{
		Bureaucrat("polo", grade);
		std::cout << "grade [" << grade << "] is OK"<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return;
	}	
}

void promote_exception_test(int grade)
{
	Bureaucrat bureaucrat("polo", grade);

	std::cout << "[promote] from grade: "<< grade << std::endl;
	try
	{
		bureaucrat.promote();
		std::cout << "new_grade [" << bureaucrat.getGrade() << "] is OK"<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return;
	}
}

void retrograde_exception_test(int grade)
{
	Bureaucrat bureaucrat("polo", grade);

	std::cout << "[retrograde] from grade: "<< grade << std::endl;
	try
	{
		bureaucrat.retrograde();
		std::cout << "new_grade [" << bureaucrat.getGrade() << "] is OK"<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return;
	}
}

void overload_redir_test(std::string name, int grade)
{
	try
	{
		Bureaucrat bureaucrat(name, grade);
		std::cout << bureaucrat;
	}
	catch(const std::exception& e)
	{
		std::cout << "error=> " << name << ": ";
		std::cerr << e.what() << std::endl;
	}

}

int	main(void)
{

	// Test overload redirection
	overload_redir_test("polo", 50);
	overload_redir_test("michel", 1);
	overload_redir_test("jean-marie", 0);
	overload_redir_test("sylvie", 150);
	overload_redir_test("rachid", 151);

	std::cout << "\n--------------------------\n" << std::endl;

	// Test instanciation exception
	unsigned int grade;
	grade  = 15;
	instanciation_exception_test(grade);
	grade  = 150;
	instanciation_exception_test(grade);
	grade  = 151;
	instanciation_exception_test(grade);
	grade  = 1;
	instanciation_exception_test(grade);
	grade  = 0;
	instanciation_exception_test(grade);
	grade  = -1;
	instanciation_exception_test(grade);
	
	std::cout << "\n--------------------------\n" << std::endl;

	// Test method exception 
	grade = 1;
	promote_exception_test(grade);
	retrograde_exception_test(grade);
	std::cout << std::endl;
	grade = 50;
	promote_exception_test(grade);
	retrograde_exception_test(grade);
	std::cout << std::endl;
	grade = 150;
	promote_exception_test(grade);
	retrograde_exception_test(grade);

	return 0;
}