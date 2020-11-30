#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <string>
#include <iostream>
#include <cstdlib>

class FragTrap
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
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const & copy);
    ~FragTrap();

    FragTrap & operator=(FragTrap const & ope);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void vaulthunter_dot_exe(std::string const & target);
};

#endif