#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
    this->_Hit_points = 60;
    this->_Max_Hit_points = 60;
    this->_Energy_points = 120;
    this->_Max_Energy_points = 120;
    this->_Melee_attack_damage = 60;
    this->_Ranged_attack_damage = 5;
    this->_Armor_damage_destruction = 0;
    this->_Name = "unnamed";
    std::cout << "Construction of NinjaTrap ..." << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
    this->_Hit_points = 60;
    this->_Max_Hit_points = 60;
    this->_Energy_points = 120;
    this->_Max_Energy_points = 120;
    this->_Melee_attack_damage = 60;
    this->_Ranged_attack_damage = 5;
    this->_Armor_damage_destruction = 0;
    this->_Name = name;
    std::cout << "Construction of NinjaTrap ..." << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & copy) : ClapTrap(copy)
{
    *this = copy;
    std::cout << "Copied" << std::endl;
    return;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "Deconstruction of NinjaTrap ..." << std::endl;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & ope)
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

void NinjaTrap::rangedAttack(std::string const & target)
{
    std::cout << "Ninja Trap " << this->_Name <<  " attacks " ;
    std::cout << target << " at range, causing " << this->_Ranged_attack_damage;
    std::cout << " points of damage ! " << std::endl;
}

void NinjaTrap::meleeAttack(std::string const & target)
{
    std::cout << "Ninja Trap " << this->_Name <<  " attacks " ;
    std::cout << target << " at range, causing " << this->_Melee_attack_damage;
    std::cout << " points of damage ! " << std::endl;
}



void NinjaTrap::ninjaShoebox(FragTrap &trap)
{
    if (this->_Energy_points > 10)
        this->_Energy_points -= 10;
    std::cout << "Ninja Trap lost 10 energy points by being around Frag Trap named ";
    std::cout << trap.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
    std::cout << "Ninja Trap randomnly attack Clap Trap named " << trap.getName() << std::endl;
    trap.takeDamage(this->_Ranged_attack_damage);

}

void NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
    if (this->_Energy_points < (110))
        this->_Energy_points += 10;
    std::cout << "Ninja Trap gained 10 points energy by being around another Ninja Trap named ";
    std::cout << trap.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
    std::cout << "Ninja Trap is jealous and attack Scav Trap named " << trap.getName() << std::endl;
    trap.takeDamage(this->_Ranged_attack_damage);
}