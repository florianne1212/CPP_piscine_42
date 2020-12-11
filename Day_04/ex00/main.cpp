#include "Peon.hpp"
#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Cat.hpp"
#include <string>
#include <iostream>

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");Peon joe("Joe");
    
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);

    std::cout << "\n---------\n" << std::endl;

    Sorcerer dumbledore("Dumbledore", "the Superb");
    std::cout << dumbledore;
    Victim bird("bird");
    std::cout << bird;
    Cat kitty("kitty");
    std::cout << kitty;
    dumbledore.polymorph(kitty);
    dumbledore.polymorph(bird);

    return 0;
}