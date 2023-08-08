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