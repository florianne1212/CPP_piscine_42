#ifndef CONVERSION_H
# define CONVERSION_H

#include <string>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <sstream>


class conversion
{
private:
    const char * _to_convert;
    std::string _convert_str;
    double _convert;
public:
    conversion();
    conversion(std::string to_conver);
    conversion(conversion const & copy);
    ~conversion();

    conversion & operator=(conversion const & ope);

    int try_to_convert();
    void to_char();
    void to_int();
    void to_float();
    void to_double();
};

#endif

