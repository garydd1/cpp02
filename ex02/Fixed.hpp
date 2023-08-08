#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {

public:

	Fixed();
	Fixed(const int n);
	Fixed(const float n);
	Fixed(const Fixed& original);

	Fixed& operator=(const Fixed& original);
	bool operator>(const Fixed& toCompare) const;
	bool operator<(const Fixed& toCompare) const;
	bool operator>=(const Fixed& toCompare) const;
	bool operator<=(const Fixed& tocompare) const;
	bool operator==(const Fixed& toCompare) const;
	bool operator!=(const Fixed& toCompare) const;

	Fixed  operator+(const Fixed &toAdd) const ;
	Fixed  operator-(const Fixed &toSubstract) const ;
	Fixed  operator*(const Fixed &toMultiplyBy) const ;
	Fixed  operator/(const Fixed &toDivideBy) const ;

	Fixed&  operator++( void ); // prefix
    Fixed   operator++( int ); // postfix
    Fixed&  operator--( void ); // prefix
    Fixed   operator--( int ); // postfix

	
    static Fixed& min( Fixed &a, Fixed &b );
    static const Fixed& min( const Fixed &a, const Fixed &b );
    static Fixed& max( Fixed &a, Fixed &b );
    static const Fixed& max( const Fixed &a, const Fixed &b );


	~Fixed();
	int		getRawBits(void) const;
	void	setRawValue(const long raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;
private: 

	int					_value;
	static const int	_nBits;
};

std::ostream& operator<<(std::ostream& COUT, Fixed const& n);


#endif