#include "FragTrap.hpp"

FragTrap::FragTrap() :
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
    std::cout << "Construction ..." << std::endl;
}

FragTrap::FragTrap(std::string name) :
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
    std::cout << "Construction ..." << std::endl;
}

FragTrap::FragTrap(FragTrap const & copy)
{
    *this = copy;
    std::cout << "Copied" << std::endl;
    return;
}

FragTrap::~FragTrap()
{
    std::cout << "Deconstruction ..." << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & ope)
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

void FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_Name <<  " attacks " ;
    std::cout << target << " at range, causing " << this->_Ranged_attack_damage;
    std::cout << " points of damage ! " << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_Name <<  " attacks " ;
    std::cout << target << " at range, causing " << this->_Melee_attack_damage;
    std::cout << " points of damage ! " << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
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

void FragTrap::beRepaired(unsigned int amount)
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

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    std::string rand_attack;

    static const std::string attack_type[] = {
        "Water attack",
        "Fire attack",
        "Electric attack",
        "Ice attack",
        "Psychic attack"
    };

    if (this->_Energy_points < 25)
    {
        std::cout << "There is not enough energy to attack" << std::endl;
        return;
    }
    this->_Energy_points -= 25;

    rand_attack = attack_type[rand() % 5];

     std::cout << target << " attacked with : " << rand_attack << std::endl;
}