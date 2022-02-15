#include "Point.hpp"  

Point::Point(): x(Fixed(0)), y(Fixed(0)) {}

Point::Point(float x, float y): x(Fixed(x)), y(Fixed(y)) {}
	
Point::~Point()
{
}

Point::Point(Point const &point): x(point.getX()), y(point.getY())
{
	*this = point;
	return;
}

Point &Point::operator=(Point const &rhs)
{
	(void)rhs;
	return *this;
}

float Point::getX(void) const
{
	return this->x.toFloat();
}

float Point::getY(void) const
{
	return this->y.toFloat();
}

bool Point::operator==(Point const &rhs) const
{
	return (this->getX() == rhs.getX() && this->getY() == rhs.getY());
}