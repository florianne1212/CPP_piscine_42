#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_Energy_points = 50;
    this->_Max_Energy_points = 50;
    this->_Melee_attack_damage = 20;
    this->_Ranged_attack_damage = 15;
    this->_Armor_damage_destruction = 3;
    this->_Name = "unnamed";
    std::cout << "Construction of ScavTrap ..." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_Energy_points = 50;
    this->_Max_Energy_points = 50;
    this->_Melee_attack_damage = 20;
    this->_Ranged_attack_damage = 15;
    this->_Armor_damage_destruction = 3;
    this->_Name = name;
    std::cout << "Construction of ScavTrap ..." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & copy) : ClapTrap(copy)
{
    *this = copy;
    std::cout << "Copied Scav" << std::endl;
    return;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Deconstruction of ScavTrap ..." << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & ope)
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

void ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "SC4V-TP " << this->_Name <<  " attacks " ;
    std::cout << target << " at range, causing " << this->_Ranged_attack_damage;
    std::cout << " points of damage ! " << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "SC4V-TP " << this->_Name <<  " attacks " ;
    std::cout << target << " at range, causing " << this->_Melee_attack_damage;
    std::cout << " points of damage ! " << std::endl;
}


void ScavTrap::challengeNewcomer(std::string const & target)
{
    std::string rand_challenge;

    static const std::string challenge_type[] = {
        "Tell a story",
        "Sing a song",
        "tell a joke",
        "Tell a secret",
    };

    rand_challenge = challenge_type[rand() % 4];

     std::cout << target << " challange is : " << rand_challenge << std::endl;
}