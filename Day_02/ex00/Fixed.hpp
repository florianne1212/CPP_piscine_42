#ifndef FIXED_H
# define FIXED_H

#include <string>
#include <iostream>

class Fixed
{
private:
    int _fixed_point;
    static const int _bits = 8;
public:
    Fixed(void);
    Fixed(Fixed const & copy);
    ~Fixed(void);

    Fixed & operator=( Fixed const & ope);

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif