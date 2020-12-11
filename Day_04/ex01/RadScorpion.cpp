#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout <<  "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & copy)
{
	operator=(copy);
}
	
RadScorpion & RadScorpion::operator=(RadScorpion const & ope)
{
	if (this != &ope)
    {
        Enemy::operator=(ope);
    }
    return (*this);
}
