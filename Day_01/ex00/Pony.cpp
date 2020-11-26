#include "Pony.hpp"

#include <iostream>

Pony::Pony(std::string name, std::string color, std::string age, std::string favorite_food)
{
	this->name = name;
	this->color = color;
	this->age = age;
	this->favorite_food = favorite_food;
	std::cout << "construction of pony" <<  std::endl;
}

Pony::~Pony()
{
	std::cout << "deconstruction of pony" <<  std::endl;
}

void
Pony::tell_name()
{
	std::cout << "Name          : ";
	std::cout << this->name <<  std::endl;
}

void
Pony::tell_age()
{
	std::cout << "Age           : ";
	std::cout << this->age <<  std::endl;
}

void
Pony::tell_color()
{
	std::cout << "Color         : ";
	std::cout << this->color <<  std::endl;
}
void

Pony::tell_favorite_food()
{
	std::cout << "Favorite food : ";
	std::cout << this->favorite_food <<  std::endl;
}
