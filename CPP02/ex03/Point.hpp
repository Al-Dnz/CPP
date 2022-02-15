#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
	
class Point  
{
	private:
		Fixed const x;
		Fixed const y;

	public:

		Point();
		Point(float x, float y);
		~Point();
		Point(Point const &point);
		Point& operator=(Point const &point);
		
		float getX(void) const;
		float getY(void) const;

		bool operator==(Point const &rhs) const;
};

#endif