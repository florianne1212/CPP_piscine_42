#include "ZombieEvent.hpp"


ZombieEvent::ZombieEvent(/* args */)
{
}

ZombieEvent::~ZombieEvent()
{
}

void
ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

Zombie	*
ZombieEvent::newZombie(std::string name)
{
    return(new Zombie(name, this->type));
}

Zombie	*
ZombieEvent::randomChump()
{
    std::string name;
    char alpha[]="abcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i < 5; ++i)
    {
        name += alpha[rand() % (sizeof(alpha) - 1)];
    }
    return(newZombie(name));
}