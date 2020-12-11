#ifndef PLASMARIFLE_H
# define PLASMARIFLE_H

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:

public:
    PlasmaRifle();
    virtual ~PlasmaRifle();
    PlasmaRifle(PlasmaRifle const & copy);
    
    PlasmaRifle & operator=(PlasmaRifle const & ope);
    
    void attack() const;
};


#endif