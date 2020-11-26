#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
private:
    Weapon *_weapon;
    std::string _name;
public:
    HumanB(std::string name);
    ~HumanB();

    //std::string getType();
    void attack();
	void setName(std::string name);
    void setWeapon(Weapon &weapon);
};


#endif