#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(PowerFist const & copy)
{
    operator=(copy);
}
    

PowerFist & PowerFist::operator=(PowerFist const & ope)
{
    if (this != &ope)
    {
        AWeapon::operator=(ope);
    }
    return (*this);
}
    
void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM ! *" << std::endl;
}