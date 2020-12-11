#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl ;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & copy)
{
	operator=(copy);
}
	
SuperMutant & SuperMutant::operator=(SuperMutant const & ope)
{
	if (this != &ope)
    {
        Enemy::operator=(ope);
    }
    return (*this);
}

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}