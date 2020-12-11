#ifndef AMATERIA_H
# define AMATERIA_H

#include <string>
#include <iostream>

class ICharacter;

class AMateria
{
private:
    AMateria();
protected:
    std::string _type;
    unsigned int _xp;
    
public:
    AMateria(std::string const & type);
    AMateria(AMateria const & copy);
    virtual ~AMateria();

    AMateria & operator=(AMateria const & ope);

    std::string const & getType() const; //Returns the materia type
    unsigned int getXP() const; //Returns the Materia's XPvirtual
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#include "ICharacter.hpp"

#endif