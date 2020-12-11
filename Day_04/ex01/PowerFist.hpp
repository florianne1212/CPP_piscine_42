#ifndef POWERFIST_H
# define POWERFIST_H

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:

public:
    PowerFist();
    virtual ~PowerFist();
    PowerFist(PowerFist const & copy);
    
    PowerFist & operator=(PowerFist const & ope);
    
    void attack() const;
};


#endif