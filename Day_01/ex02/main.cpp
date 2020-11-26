#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>
#include <time.h>


int		main(void)
{
    ZombieEvent zevent;

    srand(time(NULL));
    zevent.setZombieType("runner");
    Zombie *zombie_0 = zevent.newZombie("John");
    zombie_0->announce();
    delete zombie_0;
    zevent.setZombieType("baker");
    Zombie *zombie_1 = zevent.randomChump();
    zombie_1->announce();
    delete zombie_1;
}