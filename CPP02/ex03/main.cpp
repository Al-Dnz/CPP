#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void) 
{
	
	Point A(0, 0);
	Point B(0, 10);
	Point C(5, 10);
	Point P1(3, 1);
	Point P2(3, 100);
	Point P3(0, 3);

	bool b1 = bsp(A, B, C, P1);
	bool b2 = bsp(A, B, C, P2);
	bool b3 = bsp(A, B, C, P3);
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;




	return 0;
}

