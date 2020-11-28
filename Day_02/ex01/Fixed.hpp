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

    int getRawBits(void) const;
    void setRawBits(int const raw);
    int toInt(void) const;
    float toFloat(void) const;
};

std::ostream &operator<<(std::ostream &stream, Fixed const &fixed);

#endif