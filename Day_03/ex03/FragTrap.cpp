#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Construction of FragTrap ..." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Construction of FragTrap ..." << std::endl;
}

FragTrap::FragTrap(FragTrap const & copy) : ClapTrap(copy)
{
    *this = copy;
    std::cout << "Copied" << std::endl;
    return;
}

FragTrap::~FragTrap()
{
    std::cout << "Deconstruction of FragTrap ..." << std::endl;
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