#ifndef SORCERER_H
# define SORCERER_H

#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
    Sorcerer();

    std::string _name;
    std::string _title;
public:
    Sorcerer(std::string name, std::string title);
    Sorcerer(Sorcerer const & copy);
    ~Sorcerer();

    Sorcerer & operator=(Sorcerer const & ope);

    void polymorph(Victim const &victim) const;

    const std::string& getName(void) const;
    const std::string& getTitle(void) const;
};

std::ostream &operator<<(std::ostream &stream, Sorcerer const &sorcer);

#endif