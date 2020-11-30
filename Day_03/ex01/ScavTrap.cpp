#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
_Hit_points(100),
_Max_Hit_points(100),
_Energy_points(50),
_Max_Energy_points(50),
_Level(1),
_Melee_attack_damage(20),
_Ranged_attack_damage(15),
_Armor_damage_destruction(3),
_Name("unnamed")
{
    std::cout << "Construction Scav ..." << std::endl;
}

ScavTrap::ScavTrap(std::string name) :
_Hit_points(100),
_Max_Hit_points(100),
_Energy_points(50),
_Max_Energy_points(50),
_Level(1),
_Melee_attack_damage(20),
_Ranged_attack_damage(15),
_Armor_damage_destruction(3),
_Name(name)
{
    std::cout << "Construction Scav ..." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & copy)
{
    *this = copy;
    std::cout << "Copied Scav" << std::endl;
    return;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Deconstruction Scav ..." << std::endl;
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

void ScavTrap::takeDamage(unsigned int amount)
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

void ScavTrap::beRepaired(unsigned int amount)
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