#include <iostream>
#include <fstream>
#include "contact.hpp"
#include "manage.hpp"

int main()
{
	std::string input;
	manage manager;

	std::cout << "enter a command : ADD, SEARCH or EXIT" <<  std::endl;
	while(true)
	{
		std::cout << ">>";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
		if (input == "ADD")
			manager.add_contact();
		else if (input == "SEARCH")
			manager.show_contact();
		else if (input == "EXIT")
			break;
		else 
			std::cout << "wrong command try again with  ADD, SEARCH or EXIT" <<  std::endl;
	}
}