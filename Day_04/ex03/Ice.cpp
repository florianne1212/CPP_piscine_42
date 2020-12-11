#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::Ice(Ice const & copy) : AMateria("Ice")
{
	_xp = copy._xp;
}

Ice::~Ice()
{

}

Ice & Ice::operator=(Ice const & ope)
{
	_xp = ope._xp;
	return(*this);
}

AMateria* Ice::clone() const
{
	return(new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	
}