#ifndef VICTIM_H
# define VICTIM_H

#include <string>
#include <iostream>


class Victim
{
protected:
    Victim();

    std::string _name;
public:
    Victim(std::string name);
    Victim(Victim const & copy);
    virtual ~Victim();

    Victim & operator=(Victim const & ope);

    virtual void getPolymorphed() const;

    const std::string& getName(void) const;
};

std::ostream &operator<<(std::ostream &stream, Victim const &victi);

#endif