#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	// Test right form
	try
	{
		Form f1("f1", true, 43, 22);
		std::cout << f1 << std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	// Test wrong forms
	try
	{		
		Form f2("f2", true, 0, 22);
		std::cout << f2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{		
		Form f3("f3", true, 153, 22);
		std::cout << f3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// Test form signature 
	try
	{
		Bureaucrat bebert("bebert", 50);
		Form f4("f4", false, 100, 100);
		f4.beSigned(bebert);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat bob("bob", 50);
		Form f5("f5", false, 30, 100);
		f5.beSigned(bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat michel("michel", 50);
		Form f6("f6", true, 30, 100);
		f6.beSigned(michel);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return 0;
}
