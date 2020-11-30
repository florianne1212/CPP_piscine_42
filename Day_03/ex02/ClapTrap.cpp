#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
_Hit_points(100),
_Max_Hit_points(100),
_Energy_points(100),
_Max_Energy_points(100),
_Level(1),
_Melee_attack_damage(30),
_Ranged_attack_damage(20),
_Armor_damage_destruction(5),
_Name("unnamed")
{
    std::cout << "Construction of ClapTrap unnamed ..." << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
_Hit_points(100),
_Max_Hit_points(100),
_Energy_points(100),
_Max_Energy_points(100),
_Level(1),
_Melee_attack_damage(30),
_Ranged_attack_damage(20),
_Armor_damage_destruction(5),
_Name(name)
{
    std::cout << "Construction of ClapTrap..." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & copy)
{
    *this = copy;
    std::cout << "ClapTrap Copied" << std::endl;
    return;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Deconstruction of ClapTrap ..." << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & ope)
{
    if (this != &ope)
    {
        this->_Hit_points = ope._Hit_points;
        this->_Max_Hit_points = ope._Max_Hit_points;
        this->_Energy_points = ope._Energy_points;
        this->_Max_Energy_points = ope._Max_Energy_points;
        this->_Level = ope._Level;
        this->_Name = ope._Name;
        this->_Melee_attack_damage = ope._Melee_attack_damage;
        this->_Ranged_attack_damage = ope._Ranged_attack_damage;
        this->_Armor_damage_destruction = ope._Armor_damage_destruction;
    }
    std::cout << "Assignation" << std::endl;
    return (*this);
}


void ClapTrap::takeDamage(unsigned int amount)
{
    int lost;
    lost = amount - this->_Armor_damage_destruction;
    std::cout << "The Armor protect it from losing " << this->_Armor_damage_destruction << " points" << std::endl;
    this->_Hit_points -= lost;
    if(this->_Hit_points < 0)
        this->_Hit_points = 0;
    std::cout << lost << " points lost " << std::endl;
    std::cout << "New count for points : " << this->_Hit_points << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->_Energy_points += amount;
    this->_Hit_points += amount;

    if (this->_Hit_points > this->_Max_Hit_points)
        this->_Hit_points = this->_Max_Hit_points;
    if (this->_Energy_points > this->_Max_Energy_points)
        this->_Energy_points = this->_Max_Energy_points;
    
    std::cout << "Reparation .." << std::endl;
    std::cout << "new count for Hit points : " << this->_Hit_points << std::endl;
    std::cout << "new count for Energy points : " << this->_Energy_points << std::endl;
}