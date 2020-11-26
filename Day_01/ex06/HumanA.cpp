#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
    setName(name);
}

HumanA::~HumanA()
{
}

void 
HumanA::setName(std::string name)
{
    this->_name = name;
}

void HumanA::attack()
{
    std::cout << this->_name;
    std::cout << " attacks with his ";
    std::cout << this->_weapon.getType() << std::endl ;
}