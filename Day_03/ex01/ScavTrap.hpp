#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <string>
#include <iostream>
#include <cstdlib>

class ScavTrap
{
private:
    int _Hit_points;
    int _Max_Hit_points;
    int _Energy_points;
    int _Max_Energy_points;
    int _Level;
    int _Melee_attack_damage;
    int _Ranged_attack_damage;
    int _Armor_damage_destruction;
    std::string _Name;
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & copy);
    ~ScavTrap();

    ScavTrap & operator=(ScavTrap const & ope);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void challengeNewcomer(std::string const & target);
};

#endif