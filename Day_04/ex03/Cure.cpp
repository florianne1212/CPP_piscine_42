#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::Cure(Cure const & copy) : AMateria("cure")
{
	_xp = copy._xp;
}

Cure::~Cure()
{

}

Cure & Cure::operator=(Cure const & ope)
{
	_xp = ope._xp;
	return(*this);
}

AMateria* Cure::clone() const
{
	return(new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() <<"’s wounds *" << std::endl;
	
}