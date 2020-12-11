#ifndef AWEAPON_H
# define AWEAPON_H

#include <string>
#include <iostream>

class AWeapon
{
private: 
    std::string _name;
    int         _apcost;
    int         _damage;
protected:
    AWeapon();
public:
    
    AWeapon(std::string const & name, int apcost, int damage);
    virtual ~AWeapon();
    AWeapon(AWeapon const & copy);

    AWeapon & operator=(AWeapon const & ope);
    
    virtual void attack() const = 0;
    
    const std::string &getName() const;
    int getAPCost() const;
    int getDamage() const;    
};


#endif