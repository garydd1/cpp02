#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed {

public:

	Fixed();
	Fixed(const Fixed& other);
	Fixed& operator = (const Fixed& other);
	~Fixed();
	void setRawBits(long const raw) ; //set the fixed point number with a long
	int	getRawBits(void) const;

private: 

	int _value;
	static const int _nBits;
};


#endif