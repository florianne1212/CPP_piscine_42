#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

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

    std::cout << "\n" << std::endl;

    SuperTrap PerfectSon("PerfectSon");
    std::cout << PerfectSon.getHitPoint() << std::endl;
    std::cout << PerfectSon.getMaxHitPoint() << std::endl;
    std::cout << PerfectSon.getEnergyPoint() << std::endl;
    std::cout << PerfectSon.getMaxEnergyPoint() << std::endl;
    std::cout << PerfectSon.getLevel() << std::endl;
    std::cout << PerfectSon.getMeleeAttackDamage() << std::endl;
    std::cout << PerfectSon.getRangedAttackDamage() << std::endl;
    std::cout << PerfectSon.getArmorDamageReduction() << std::endl;
    PerfectSon.meleeAttack("Monsters");
    PerfectSon.rangedAttack("Vilains");
    

    std::cout << "\n" << std::endl;


	return (0);
}