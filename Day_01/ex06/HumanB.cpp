#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
    setName(name);
}

HumanB::~HumanB()
{
}

void 
HumanB::setName(std::string name)
{
    this->_name = name;
}

void 
HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

void HumanB::attack()
{
    std::cout << this->_name;
    std::cout << " attacks with his ";
    std::cout << this->_weapon->getType() << std::endl ;
}