#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void) 
{
	//Point(X, Y)
	Point A(0, 0);
	Point B(0, 10);
	Point C(5, 5);
	Point P1(5, 4.3);
	Point P2(1, 4);
	Point P3(2, 3);
	Point P4(5, 5);

	bool b1 = bsp(A, B, C, P1);
	bool b2 = bsp(A, B, C, P2);
	bool b3 = bsp(A, B, C, P3);
	bool b4 = bsp(A, B, C, P4);
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;
	std::cout << b4 << std::endl;





	return 0;
}

