#ifndef HUMANA_H
# define HUMANA_H
#include "Weapon.hpp"

class HumanA
{
private:
    Weapon &_weapon;
    std::string _name;
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();

    //std::string getType();
    void attack();
	void setName(std::string name);
};



#endif