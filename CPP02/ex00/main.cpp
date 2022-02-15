#include "Fixed.hpp"

int main(void) 
{
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	// std::cout << "___________________________" << std::endl;
	// Fixed x;
	// std::cout << "x = " << x.getRawBits() << std::endl;
	// x.setRawBits(32);
	// std::cout << "x = " << x.getRawBits() << std::endl;
	return 0;
}