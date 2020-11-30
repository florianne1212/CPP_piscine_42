#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <string>
#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const & copy);
    ~FragTrap();

    FragTrap & operator=(FragTrap const & ope);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);

    void vaulthunter_dot_exe(std::string const & target);
};

#endif