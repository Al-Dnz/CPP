#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "********** Test right forms ******************************"<< std::endl;
	try
	{
		Form f1("f1", true, 43, 22);
		std::cout << f1 << std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\n********** Test wrong forms ******************************"<< std::endl;
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

	try
	{		
		Form f2("f2", true, 22, 0);
		std::cout << f2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{		
		Form f3("f3", true, 22, 153);
		std::cout << f3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n\n********** Test form signature with Form::beSigned******************************"<< std::endl;
	 
	try
	{
		Bureaucrat bebert("bebert", 50);
		Form f4("f4", false, 100, 100);
		std::cout << f4;
		f4.beSigned(bebert);
		std::cout << f4;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	try
	{
		Bureaucrat bob("bob", 50);
		Form f5("f5", false, 30, 100);
		std::cout << f5;
		f5.beSigned(bob);
		std::cout << f5;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	try
	{
		Bureaucrat michel("michel", 50);
		Form f6("f6", true, 30, 100);
		std::cout << f6;
		f6.beSigned(michel);
		std::cout << f6;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << "\n\n********** Test form signature with Bureaucrat::signForm******************************"<< std::endl;
	 
	try
	{
		Bureaucrat bebert("bebert", 50);
		Form f4("f4", false, 100, 100);
		std::cout << f4;
		bebert.signForm(f4);
		std::cout << f4;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	try
	{
		Bureaucrat bob("bob", 50);
		Form f5("f5", false, 30, 100);
		std::cout << f5;
		bob.signForm(f5);
		std::cout << f5;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	try
	{
		Bureaucrat michel("michel", 50);
		Form f6("f6", true, 30, 100);
		std::cout << f6;
		michel.signForm(f6);
		std::cout << f6;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return 0;
}
