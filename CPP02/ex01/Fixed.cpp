#include "Fixed.hpp"
	
Fixed::Fixed(): n(0)
{
	std::cout << "Default constructor called" << std::endl;
}
	
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &rhs) 
		return *this;
	this->n = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->n);
}

void Fixed::setRawBits(int const raw)
{
	this->n = raw;
}

Fixed::Fixed(int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->n = i << store;
}

Fixed::Fixed(float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->n = roundf(f * (1 << store));
}

int	Fixed::toInt(void) const
{
	return ((int)roundf(toFloat()));
}

float Fixed::toFloat(void) const
{
	return ((float)this->n / (float)(1 << store));
}

std::ostream	&operator<<(std::ostream &lhs, Fixed const &rhs)
{
	lhs << rhs.toFloat();

	return lhs;
}