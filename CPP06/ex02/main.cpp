#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base* generate(void)
{
	int	min(0);
	int	max(2);
	int randNum;
	Base* base;

	srand(time(NULL)+ rand());
	randNum = rand()%(max-min + 1) + min;
	switch (randNum)
	{
		case 0:
			base = new A; 
			break;
		case 1:
			base = new B; 
			break;
		case 2:
			base = new C; 
			break;
		default:
			break;
	}
	return base;
}

// dynamic cast works only if there are a heritage line between p and the question class
void identify(Base* p)
{
	if( dynamic_cast<A *>(p))
		std::cout << "class A identified by pointer" << std::endl;
	if( dynamic_cast<B *>(p))
		std::cout << "class B identified by pointer" << std::endl;
	if( dynamic_cast<C *>(p))
		std::cout << "class C identified by pointer" << std::endl;
}

// if dynamic cast doesn't occur, this catch a bad cast excetption
void identify( Base & p)
{
	try
	{
		(void) dynamic_cast<A &>(p);
		std::cout << "class A identified by reference" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
		
	try
	{
		(void) dynamic_cast<B &>(p);
		std::cout << "class B identified by reference" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		(void) dynamic_cast<C &>(p);
		std::cout << "class C identified by reference" << std::endl;
	}
	catch(const std::exception& e)
	{
		//std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	Base *b = generate();

	identify(b);
	identify(*b);

	delete b;
	return 0;
}