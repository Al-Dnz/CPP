#include "Point.hpp"
#include "Fixed.hpp"

// https://webdevdesigner.com/q/how-to-determine-if-a-point-is-in-a-2d-triangle-36120/

// calculate determinant
float sign (Point const p1, Point const p2, Point const p3)
{
    return ((p1.getY() - p3.getY()) * (p2.getX() - p3.getX()) - (p2.getY() - p3.getY()) * (p1.getX() - p3.getX()));
}

// verify condition 
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool b1, b2, b3;

	if ((point == a ) || (point == b) || (point == c))
		return (false);
	b1 = sign(point, a, b) < 0.0f;
    b2 = sign(point, b, c) < 0.0f;
    b3 = sign(point, c, a) < 0.0f;


	return ((b1 == b2) && (b2 == b3));
}