#include "Zombie.hpp"

#include <iostream>
#include <string>

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