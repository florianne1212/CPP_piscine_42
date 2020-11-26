#include "manage.hpp"
#include <iostream>

manage::manage(/* args */)
{
	index=0;
	//std::cout << "construction" <<  std::endl;
}

manage::~manage()
{
	//std::cout << "deconstruction" <<  std::endl;
}

void	manage::add_contact()
{
	std::string buff;

	if (index < 8)
	{
		std::cout << "enter first name" <<  std::endl;
		std::getline (std::cin, buff);
		contact_tab[index].setFirstName(buff);
		std::cout << "enter last name" <<  std::endl;
		std::getline(std::cin, buff);
		contact_tab[index].setLastName(buff);
		std::cout << "enter nickname" <<  std::endl;
		std::getline(std::cin, buff);
		contact_tab[index].setNickname(buff);
		std::cout << "enter login" <<  std::endl;
		std::getline(std::cin, buff);
		contact_tab[index].setLogin(buff);
		std::cout << "enter postal address" <<  std::endl;
		std::getline(std::cin, buff);
		contact_tab[index].setPostalAdress(buff);
		std::cout << "enter email address" <<  std::endl;
		std::getline(std::cin, buff);
		contact_tab[index].setEmailAdress(buff);
		std::cout << "enter phone number" <<  std::endl;
		std::getline(std::cin, buff);
		contact_tab[index].setPhoneNumber(buff);
		std::cout << "enter birthday date" <<  std::endl;
		std::getline(std::cin, buff);
		contact_tab[index].setBirthday(buff);
		std::cout << "enter favorite meal" <<  std::endl;
		std::getline(std::cin, buff);
		contact_tab[index].setMeal(buff);
		std::cout << "enter underwear color" <<  std::endl;
		std::getline(std::cin, buff);
		contact_tab[index].setUnderwear(buff);
		std::cout << "enter darkest secret" <<  std::endl;
		std::getline(std::cin, buff);
		contact_tab[index].setSecret(buff);
		if (index < 8)
			index++;
		std::cout << "you can enter a new command (SEARCH, ADD, EXIT)" <<  std::endl;
	}
	else
	{
		std::cout << "there is too much contact the Phone book is full" << std::endl;
		std::cout << "you can enter a new command (SEARCH, ADD, EXIT)" <<  std::endl;
	}
	
	return;
}

void	manage::print_format(std::string str)
{
	if(str.size() > 10)
	{
		str.insert(9, ".");
		str = str.substr(0,10);
		std::cout << str ;
	}
	else 
	{
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << str ;
	}
}

void	manage::print_contact(std::string str1, std::string str2)
{
	std::cout << str1 ;
	std::cout << str2 << std::endl;
}

void	manage::ask_index()
{
	std::string read;
	int asked_index = -1;

	std::cout <<  "enter a number between 0 and " ;
	std::cout << (index -1) <<  std::endl;
	std::getline (std::cin, read);
	asked_index = atoi(read.c_str());
	if (asked_index < 0 || asked_index > (index -1))
		std::cout << "no contact at this index";
	else
	{
		print_contact("First name      :", contact_tab[asked_index].getFirstName());
		print_contact("Last name       :", contact_tab[asked_index].getLastName());
		print_contact("Nickename       :", contact_tab[asked_index].getNickname());
		print_contact("Login           :", contact_tab[asked_index].getLogin());
		print_contact("Postal address  :", contact_tab[asked_index].getPostalAdress());
		print_contact("Email adress    :", contact_tab[asked_index].getEmailAdress());
		print_contact("Phone number    :", contact_tab[asked_index].getPhoneNumber());
		print_contact("Bithday date    :", contact_tab[asked_index].getBirthday());
		print_contact("Favorite meal   :", contact_tab[asked_index].getMeal());
		print_contact("Underwear color :", contact_tab[asked_index].getUnderwear());
		print_contact("Darkest secret  :", contact_tab[asked_index].getSecret());
		std::cout << "you can enter a new command (SEARCH, ADD, EXIT)" <<  std::endl;
	}
	
}

void	manage::show_contact()
{
	int i = 0;
	if(index == 0)
		std::cout << "enter contact before" <<  std::endl;
	else
	{
		std::cout << "index     |first name|last name |Nickname " <<  std::endl;
		while (i < index)
		{
			std::cout << std::setfill (' ') << std::setw (10);
			std::cout << i ; 
			std::cout << "|";
			std::cout << std::setw(10);
			manage::print_format(contact_tab[i].getFirstName()) ;
			std::cout << "|";
			manage::print_format(contact_tab[i].getLastName()) ;
			std::cout << "|";
			manage::print_format(contact_tab[i].getNickname());
			std::cout << "|";
			std::cout << std::endl;
			i++;
		}
		ask_index();
	}
}