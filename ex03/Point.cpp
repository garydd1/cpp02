#include "Point.hpp"

Point::Point( void ){
	_x = 0;
	_y = 0;
}

Point::Point(const float x, const float y){
	_x= x;
	_y= y;
}

//Copy constructor
Point::Point(const Point& original){
	_x = original._x;
	_y = original._y;
}

//Operator = overload
Point& Point::operator=(Point& toCopy){
	if (this!= &toCopy){
		_x = toCopy._x;
		_y = toCopy._y;
	}
	return *this;
}

~Point( void ){
	return; 
}

Fixed Point::getX( void ){
	
}