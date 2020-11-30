#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>
#include <iostream>
#include <cstdlib>

class ClapTrap
{
protected:
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
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const & copy);
    ~ClapTrap();

    ClapTrap & operator=(ClapTrap const & ope);

    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName(void);

};

#endif