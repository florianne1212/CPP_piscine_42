#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_point(0)
{
	//std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::Fixed(const int to_fix)
{
	//std::cout << "int constructor called" << std::endl;
	this->_fixed_point = to_fix << _bits; 
	return;
}

Fixed::Fixed(const float to_fix)
{
	//std::cout << "float constructor called" << std::endl;
	this->_fixed_point = roundf(to_fix * (1 << _bits)); 
	return;
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
	return;
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_point;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed_point = raw;
}

Fixed & Fixed::operator=( Fixed const & ope)
{
	//std::cout << "Assignation operator called" << std::endl;
	if (this != &ope)
		this->_fixed_point = ope.getRawBits();
	
	return (*this);
}

bool Fixed::operator==( Fixed const & ope) const
{
	return(getRawBits() == ope.getRawBits());
}

bool Fixed::operator!=( Fixed const & ope) const
{
	return(getRawBits() != ope.getRawBits());
}

bool Fixed::operator<=( Fixed const & ope) const
{
	return(getRawBits() <= ope.getRawBits());
}

bool Fixed::operator>=( Fixed const & ope) const
{
	return(getRawBits() >= ope.getRawBits());
}

bool Fixed::operator<( Fixed const & ope) const
{
	return(getRawBits() < ope.getRawBits());
}

bool Fixed::operator>( Fixed const & ope) const
{
	return(getRawBits() > ope.getRawBits());
}

Fixed Fixed::operator+( Fixed const & ope) const
{
	Fixed fix;

	fix.setRawBits(getRawBits() + ope.getRawBits());
	return (fix);
}

Fixed Fixed::operator-( Fixed const & ope) const
{
	Fixed fix;

	fix.setRawBits(getRawBits() - ope.getRawBits());
	return (fix);
}

Fixed Fixed::operator*( Fixed const & ope) const
{
	return (Fixed(toFloat() * ope.toFloat()));
}

Fixed Fixed::operator/( Fixed const & ope) const
{
	return (Fixed(toFloat() / ope.toFloat()));
}

Fixed &Fixed::operator++(void)
{
	this->_fixed_point += 1;
	return(*this);
}

Fixed &Fixed::operator--(void)
{
	this->_fixed_point -= 1;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return(tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return(tmp);
}

const Fixed & Fixed::min(const Fixed & a, const Fixed & b)
{
	if (a < b)
		return (a);
	return (b);	
}

const Fixed & Fixed::max(const Fixed & a, const Fixed & b)
{
	if (a > b)
		return (a);
	return (b);	
}

int Fixed::toInt(void) const
{
	return (this->_fixed_point >> _bits);
}

float Fixed::toFloat(void) const
{
	return (((float)this->_fixed_point) / (1 << _bits));
}

std::ostream &operator<<(std::ostream &stream, Fixed const &fixed)
{
	stream << fixed.toFloat();
	return (stream);
}

const Fixed & min(const Fixed & a, const Fixed & b)
{
	if (a < b)
		return (a);
	return (b);	
}

const Fixed & max(const Fixed & a, const Fixed & b)
{
	if (a > b)
		return (a);
	return (b);	
}