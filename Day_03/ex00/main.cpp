#include "FragTrap.hpp"

int main()
{
    FragTrap Pony("Pony");
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


	return (0);
}