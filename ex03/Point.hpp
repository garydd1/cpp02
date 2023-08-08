#ifndef Point_HPP
# define Point_Hpp
#include "Fixed.hpp"

class Point{

public:
	Point( void );
	Point(const float x, const float y);
	Point(const Point& original);
	Point& operator=(const Point& toCopy);
	~Point( void );
	Fixed getX( void );
	Fixed getY( void );
	
private:

	Fixed const _x;
	Fixed const _y;

};

bool bsp( Point const a, Point const b, Point const c, Point point);

#endif