#include "Fixed.hpp"

int main(void) 
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;


	std::cout << "---------------------" << std::endl;
	Fixed x(10);
	std::cout << x / 3 << std::endl;
	std::cout << x + 3 << std::endl;
	std::cout << x * 3 << std::endl;
	std::cout << x - 3 << std::endl;
	bool b1 = x >= 3;
	std::cout << b1 << std::endl;
	b1 = x > 3;
	std::cout << b1 << std::endl;
	b1 = x == 3;
	std::cout << b1 << std::endl;
	b1 = x < 3;
	std::cout << b1 << std::endl;
	b1 = x <= 3;
	std::cout << b1 << std::endl;


	return 0;
}
