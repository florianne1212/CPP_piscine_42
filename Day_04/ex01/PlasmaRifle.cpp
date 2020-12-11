#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & copy)
{
    operator=(copy);
}
    

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & ope)
{
    if (this != &ope)
    {
        AWeapon::operator=(ope);
    }
    return (*this);

}
    
void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}