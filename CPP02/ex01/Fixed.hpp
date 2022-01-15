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
		
};

std::ostream	&operator<<(std::ostream &lhs, Fixed const &rhs);

#endif