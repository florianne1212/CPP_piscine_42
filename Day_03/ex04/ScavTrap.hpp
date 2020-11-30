#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <string>
#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & copy);
    ~ScavTrap();

    ScavTrap & operator=(ScavTrap const & ope);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);

    void challengeNewcomer(std::string const & target);
};

#endif