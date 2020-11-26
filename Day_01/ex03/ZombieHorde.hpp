#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H
#include "Zombie.hpp"

class ZombieHorde
{
private:
	int size;
	Zombie *zombies;
public:
	ZombieHorde(int n);
	~ZombieHorde();
	std::string		create_random(int e);
	void			announce();
};


#endif