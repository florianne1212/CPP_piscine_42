#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>


int		main(void)
{
	srand(time(NULL));
	ZombieHorde zombies = ZombieHorde(5);
	zombies.announce();
	

}