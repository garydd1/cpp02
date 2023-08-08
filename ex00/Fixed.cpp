#include "Fixed.hpp"

const int Fixed::_nBits = 8;

// Default Constructor
Fixed::Fixed( void ){
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

// Copy constructor;
Fixed::Fixed(const Fixed& original){
	std::cout<<"Copy constructor called"<<std::endl;
	*this = original;
}

//operator= overload
Fixed& Fixed::operator=(const Fixed &original){
	if(this != &original)
	{
		std::cout << "Copy assigment operator called" << std::endl;
		this->_value = original.getRawBits();
	}
	return *this;
}

//Destructor 
Fixed::~Fixed( void ){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits( long const raw){
	std::cout<< "setRawBits member function called "<<std::endl;
	_value = raw;
}