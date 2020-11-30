#ifndef NINJATRAP_H
# define NINJATRAP_H

#include <string>
#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
    NinjaTrap();
    NinjaTrap(std::string name);
    NinjaTrap(NinjaTrap const & copy);
    ~NinjaTrap();

    NinjaTrap & operator=(NinjaTrap const & ope);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);

    void ninjaShoebox(FragTrap &trap);
    void ninjaShoebox(NinjaTrap &trap);
    void ninjaShoebox(ClapTrap &trap);
    void ninjaShoebox(ScavTrap &trap);
};

#endif