#ifndef PEON_H
# define PEON_H

#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
private:
    Peon();
public:
    Peon(std::string name);
    Peon(Peon const & copy);
    virtual ~Peon();

    Peon & operator=(Peon const & ope);

    virtual void getPolymorphed() const;
};

#endif