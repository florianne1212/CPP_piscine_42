#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage):
_name(name),
_apcost(apcost),
_damage(damage)
{

}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(AWeapon const & copy)
{
    *this = copy;
    return;
}

AWeapon & AWeapon::operator=(AWeapon const & ope)
{
    if (this != &ope)
    {
        this->_name = ope._name;
        this->_apcost = ope._apcost;
        this->_damage = ope._damage;
    }
    return (*this);
}


const std::string & AWeapon::getName() const
{
    return _name;
}

int AWeapon::getAPCost() const
{
    return _apcost;
}

int AWeapon::getDamage() const
{
    return _damage;
}