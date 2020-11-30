#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
    FragTrap Pony("Pony");
    ScavTrap Unicorn("Unicorn");

    Pony.rangedAttack("Vilain");
    Pony.meleeAttack("bad guys");
    Pony.vaulthunter_dot_exe("bad guys");
    Pony.takeDamage(30);
    Pony.takeDamage(65);
    Pony.takeDamage(25);
    Pony.beRepaired(30);
    Pony.vaulthunter_dot_exe("killers");
    Pony.vaulthunter_dot_exe("bad guys");
    Pony.vaulthunter_dot_exe("Vilain");
    Pony.vaulthunter_dot_exe("Wizard");
    Pony.vaulthunter_dot_exe("Monster");

    std::cout << "\n" << std::endl;

    Unicorn.rangedAttack("Fellon");
    Unicorn.meleeAttack("Malefactor");
    Unicorn.takeDamage(30);
    Unicorn.takeDamage(65);
    Unicorn.beRepaired(30);
    Unicorn.challengeNewcomer("Monster");
    Unicorn.challengeNewcomer("Fellon");

    std::cout << "\n" << std::endl;

    NinjaTrap Rainbow("Rainbow");
    ClapTrap God("God");


    Rainbow.ninjaShoebox(Unicorn);
    Rainbow.ninjaShoebox(Pony);
    Rainbow.ninjaShoebox(Rainbow);
    Rainbow.ninjaShoebox(God);


	return (0);
}