#include "Point.hpp"

Point::Point( void ):_x(0),_y(0){
}

Point::Point(const float x, const float y):_x(x), _y(y){
}

//Copy constructor
Point::Point(const Point& original):_x(original._x), _y(original._y){
}

//Operator = overload
// Point& Point::operator=(Point const& toCopy){
// 	if (this!= &toCopy){
// 		Point temp(toCopy);
// 		std::swap(_x, temp._x);
// 		std::swap(_x, temp._y);
// 	}
// 	return *this;
// }

Point::~Point( void ){
	return; 
}

float Point::getX( void ) const{
	return _x.toFloat();
}

float Point::getY( void ) const{
	return _y.toFloat();
}

bool Point::operator==(const Point& other) const{
	return (_x == other._x && _y == other._y);
}
