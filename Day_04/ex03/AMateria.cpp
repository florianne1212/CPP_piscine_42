#include "AMateria.hpp"


AMateria::AMateria():
_type(""),
_xp(0)
{
}

AMateria::AMateria(std::string const & type):
_type(type),
_xp(0)
{

}

AMateria::AMateria(AMateria const & copy)
{
	*this = copy;
    return;
}

AMateria::~AMateria()
{

}

AMateria & AMateria::operator=(AMateria const & ope)
{
	if (this != &ope)
    {
        this->_xp = ope._xp;
        this->_type = ope._type;
    }
    return (*this);
}

std::string const & AMateria::getType() const //Returns the materia type
{
	return(this->_type);
}

unsigned int AMateria::getXP() const //Returns the Materia's XPvirtual
{
	return(this->_xp);
}

void AMateria::use(ICharacter& target)
{
	this->_xp += 10;
  	(void) target;
}