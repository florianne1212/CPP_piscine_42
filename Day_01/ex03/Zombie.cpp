#include "Zombie.hpp"

#include <iostream>
#include <string>

Zombie::Zombie(void)
{
	this->name = "f";
	this->type = "c";
}

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

void
Zombie::announce()
{
	std::cout <<  "<" << this->name << "(" << this->type << ")>";
	std::cout << "Braiiiiiiinnnssss ..." << std::endl;
}

void
Zombie::setName(std::string name)
{
	this->name = name;
}

void
Zombie::setType(std::string type)
{
	this->type = type;
}