#ifndef FIXED_H
# define FIXED_H

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _fixed_point;
	static const int _bits = 8;
public:
	Fixed(void);
	Fixed(Fixed const & copy);
	Fixed(const int to_fix);
	Fixed(const float to_fix);
	~Fixed(void);

	Fixed & operator=( Fixed const & ope);

	bool operator==( Fixed const & ope) const;
	bool operator!=( Fixed const & ope) const;
	bool operator<=( Fixed const & ope) const;
	bool operator>=( Fixed const & ope) const;
	bool operator<( Fixed const & ope) const;
	bool operator>( Fixed const & ope) const;


	Fixed operator+( Fixed const & ope) const;
	Fixed operator-( Fixed const & ope) const;
	Fixed operator*( Fixed const & ope) const;
	Fixed operator/( Fixed const & ope) const;

	Fixed &operator++(void);
	Fixed &operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	int toInt(void) const;
	float toFloat(void) const;

	const static Fixed & min(const Fixed & a, const Fixed & b);
	const static Fixed & max(const Fixed & a, const Fixed & b);
};

std::ostream &operator<<(std::ostream &stream, Fixed const &fixed);
const Fixed & min(const Fixed & a, const Fixed & b);
const Fixed & max(const Fixed & a, const Fixed & b);

#endif