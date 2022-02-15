#include "Fixed.hpp"
	
Fixed::Fixed(): n(0)
{
}

Fixed::Fixed(const int init)
{
	n = init << store;
}

Fixed::Fixed(const float init)
{
	n = roundf(init * (1 << store));
}
	
Fixed::~Fixed()
{
}

Fixed::Fixed(Fixed const &fixed)
{
	*this = fixed;
	return;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	if ( this != &rhs )
	{
		n = rhs.n;
	}
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return n;
}

void Fixed::setRawBits(int const raw)
{
	this->n = raw;
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
	return (this->toFloat() == rhs.toFloat());
}

bool Fixed::operator!=(Fixed const &rhs)
{
	return (this->toFloat() != rhs.toFloat());
}

bool Fixed::operator>=(Fixed const &rhs)
{
	return (this->toFloat() >= rhs.toFloat());
}

bool Fixed::operator<=(Fixed const &rhs)
{
	return (this->toFloat() <= rhs.toFloat());
}

bool Fixed::operator>(Fixed const &rhs)
{
	return (this->toFloat() > rhs.toFloat());
}

bool Fixed::operator<(Fixed const &rhs)
{
	return (this->toFloat() < rhs.toFloat());
}


Fixed Fixed::operator+(Fixed const& b)
{
	return (Fixed(this->toFloat() + b.toFloat()));
}

Fixed Fixed::operator-(Fixed const& b)
{
	return (Fixed(this->toFloat() - b.toFloat()));
}

Fixed Fixed::operator*(Fixed const& b)
{
	return (Fixed(this->toFloat() * b.toFloat()));
}

Fixed Fixed::operator/(Fixed const& b)
{
	if (b.toFloat() != 0)
		return (Fixed(this->toFloat() / b.toFloat()));
	else
		return 0;
}

Fixed &Fixed::operator++()
{
	n += 1;
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
	n -= 1;
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
	if (a.toFloat() < b.toFloat())
		return a;
	return b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.toFloat() < b.toFloat())
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return a;
	return b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.toFloat() > b.toFloat())
		return a;
	return b;
}