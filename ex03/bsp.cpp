#include "Point.hpp"
#include "Fixed.hpp"
#include <cmath>
/* Area of any triangle given 3 points: 
	A = 0.5 * | x1(y2-y3)+x2(y3-y1)+x3(y1-y2) |
	A point is inside a triangle if the sum of the subtriangles
	formed by it is the same than the Area of the main triangle.
*/
/**
 * This function returns true if the given point "point" is inside the a-b-c triangle.
 *
*/
bool bsp( Point const a, Point const b, Point const c, Point point){
	
	
	float area = 0.5 * fabs( a.getX()*(b.getY()-c.getY()) + b.getX()*(c.getY()-a.getY()) + c.getX()*(a.getY()-b.getY()) );
	std::cout << "area of triangle :" << area << std::endl;
	float area1 = 0.5 * fabs( point.getX()*(b.getY()-c.getY()) + b.getX()*(c.getY()-point.getY()) + c.getX()*(point.getY()-b.getY()) );
	std::cout << "area 1 :" << area1 << std::endl;
	float area2 = 0.5 * fabs( a.getX()*(point.getY()-c.getY()) + point.getX()*(c.getY()-a.getY()) + c.getX()*(a.getY()-point.getY()) );
	std::cout << "area 2 :" << area2 << std::endl;
	float area3 = 0.5 * fabs( a.getX()*(b.getY()-point.getY()) + b.getX()*(point.getY()-a.getY()) + point.getX()*(a.getY()-b.getY()) );
	std::cout << "area 3 :" << area3 << std::endl;
	if (a == b || b==c||c==a ) return false;
	if (point == a || point == b || point == c) 
		return false;
	if (area == area1 + area2 + area3) return true;
	else return false;

	return true;

}

int main ( void ) {

	Point a(1.0, 1.0);
	Point b(2.0, 2.0);
	Point c(3.0, 1.0);
	Point point(2.0, 0.999);
	if (bsp(a, b, c, point))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is outside the triangle" << std::endl;
	return (0);
}