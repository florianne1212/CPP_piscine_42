#ifndef CAT_H
# define CAT_H

#include <string>
#include <iostream>
#include "Victim.hpp"

class Cat : public Victim
{
private:
    Cat();
public:
    Cat(std::string name);
    Cat(Cat const & copy);
    ~Cat();

    Cat & operator=(Cat const & ope);

    virtual void getPolymorphed() const;
};

#endif