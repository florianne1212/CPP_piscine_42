#ifndef HUMAN_H
# define HUMAN_H

#include <iostream>
#include <string>
#include "Brain.hpp"

class Human
{
public:
    Human();
    ~Human();
    std::string    identify() const;
    const Brain     &getBrain();
private:
    const Brain _brain;
};


#endif