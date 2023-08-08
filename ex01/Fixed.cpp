#include "Fixed.hpp"

const int Fixed::_nBits = 8;

Fixed::Fixed( void ){
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

//constructor int
Fixed::Fixed( const int n) : _value( n << _nBits){
	std::cout << "Int Constructor called" << std::endl;
}

//Constructor float
Fixed::Fixed( const float n ) : _value( roundf( n * ( 1 << _nBits ) ) ) {
    std::cout << "Float constructor called" << std::endl;
}

//Copy constructor 
Fixed::Fixed(const Fixed& other){
	std::cout<<"Copy constructor called"<<std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed &other){
	if(this != &other)
	{
		std::cout << "Copy assigment operator called" << std::endl;
		this->_value = other.getRawBits();
	}
	return *this;
}

Fixed::~Fixed( void ){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	// 	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

float   Fixed::toFloat( void ) const {
    return static_cast<float>( this->getRawBits() ) / ( 1 << _nBits );
}

int     Fixed::toInt( void ) const {
    return this->_value >> _nBits;
}


std::ostream& operator<<(std::ostream& COUT, Fixed const& n){

	COUT<< n.toFloat();
	return COUT ;
}

