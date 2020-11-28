#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(Fixed const & copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
    return;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_point;
}

void Fixed::setRawBits(int const raw)
{
    this->_fixed_point = raw;
}

Fixed & Fixed::operator=( Fixed const & ope)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &ope)
        this->_fixed_point = ope.getRawBits();
    
    return (*this);
}