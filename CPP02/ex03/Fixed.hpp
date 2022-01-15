#ifndef FIXED_H
#define FIXED_H
#pragma once

#include <iostream>
#include <cmath>
	
class Fixed  
{
	private:
		int	n;
		static const int store = 8;

	public:
		Fixed(void);
		Fixed(int i);
		Fixed(float f);
		Fixed(Fixed const &fixed);
		~Fixed(void);
		Fixed& operator=(Fixed const &fixed);

		int		toInt(void) const;
		float	toFloat(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static Fixed const &max(Fixed const &a, Fixed const &b);

		Fixed operator+(Fixed const& b);
		Fixed operator-(Fixed const& b);
		Fixed operator*(Fixed const& b);
		Fixed operator/(Fixed const& b);

		bool operator>(Fixed const& b);
		bool operator<(Fixed const& b);
		bool operator>=(Fixed const& b);
		bool operator<=(Fixed const& b);
		bool operator==(Fixed const& b);
		bool operator!=(Fixed const& b);	
};

std::ostream	&operator<<(std::ostream &lhs, Fixed const &rhs);

#endif