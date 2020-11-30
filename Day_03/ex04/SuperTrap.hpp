#ifndef SUPERTRAP_H
# define SUPERTRAP_H

#include <string>
#include <iostream>
#include <cstdlib>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
    SuperTrap();
    SuperTrap(std::string name);
    SuperTrap(SuperTrap const & copy);
    ~SuperTrap();

    SuperTrap & operator=(SuperTrap const & ope);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);

    int getHitPoint(void);
    int getMaxHitPoint(void);
    int getEnergyPoint(void);
    int getMaxEnergyPoint(void);
    int getLevel(void);
    int getMeleeAttackDamage(void);
    int getRangedAttackDamage(void);
    int getArmorDamageReduction(void);
};

#endif