#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <stdlib.h>

ZombieHorde::ZombieHorde(int n)
{
	this->size = n;
	this->zombies = new Zombie[n];

	for (int i = 0; i < n; i++)
	{
		this->zombies[i].setName(create_random(5));
		this->zombies[i].setType("baker");
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->zombies;
}

std::string
ZombieHorde::create_random(int e)
{
	std::string name;
	char alpha[]="abcdefghijklmnopqrstuvwxyz";
	for(int i = 0; i < e; ++i)
	{
		name += alpha[rand() % (sizeof(alpha) - 1)];
	}
	return (name);
}

void
ZombieHorde::announce()
{
	for(int i = 0; i < this->size; i++)
	{
		zombies[i].announce();
	}
}