#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

#include "string"
#include "Zombie.hpp"
#include <stdlib.h>

class ZombieEvent
{
private:
	std::string type;
public:
	ZombieEvent(/* args */);
	~ZombieEvent();
	void	setZombieType(std::string type);
	Zombie	*randomChump();
	Zombie	*newZombie(std::string name);
};


#endif