#include "Fixed.hpp"
	
Fixed::Fixed(): n(0)
{
	//std::cout << "Default constructor called" << std::endl;
}
	
Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	//std::cout << "Assignation operator called" << std::endl;
	if (this == &rhs) 
		return *this;
	this->n = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return n;
}

void Fixed::setRawBits(int const raw)
{
	this->n = raw;
}

Fixed::Fixed(int i)
{
	//std::cout << "Int constructor called" << std::endl;
	this->n = i << store;
}

Fixed::Fixed(float f)
{
	//std::cout << "Float constructor called" << std::endl;
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


bool Fixed::operator==(Fixed const &rhs)
{
	return this->getRawBits() == rhs.getRawBits();
}

bool Fixed::operator!=(Fixed const &rhs)
{
	return this->getRawBits() != rhs.getRawBits();
}

bool Fixed::operator>=(Fixed const &rhs)
{
	return this->getRawBits() >= rhs.getRawBits();
}

bool Fixed::operator<=(Fixed const &rhs)
{
	return this->getRawBits() <= rhs.getRawBits();
}

bool Fixed::operator>(Fixed const &rhs)
{
	return this->getRawBits() > rhs.getRawBits();
}

bool Fixed::operator<(Fixed const &rhs)
{
	return this->getRawBits() < rhs.getRawBits();
}


Fixed Fixed::operator+(Fixed const& b)
{
	Fixed f;

	f.setRawBits(this->getRawBits() + b.getRawBits());
	return (f);
}

Fixed Fixed::operator-(Fixed const& b)
{
	Fixed f;

	f.setRawBits(this->getRawBits() - b.getRawBits());
	return (f);
}

Fixed Fixed::operator*(Fixed const& b)
{
	Fixed f;

	f.setRawBits(this->n * b.toInt());
	return (f);
}

Fixed Fixed::operator/(Fixed const& b)
{
	Fixed f;

	if (b.getRawBits() != 0)
		f.setRawBits(this->toFloat() /b.toFloat());
	return (f);
}


Fixed &Fixed::operator++()
{
	*this = *this + Fixed(1.0f / (1 << 8));
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	operator++();
	return tmp;
}

Fixed &Fixed::operator--()
{
	*this = *this - Fixed(1.0f / (1 << 8));

	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	operator--();

	return tmp;
}


Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}