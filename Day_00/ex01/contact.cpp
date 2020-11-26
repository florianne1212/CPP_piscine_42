#include "contact.hpp"
#include <iostream>

contact::contact(/* args */)
{
	//std::cout << "construction" <<  std::endl;
}

contact::~contact()
{
	//std::cout << "deconstruction" <<  std::endl;
}

std::string
contact::getFirstName()
{
	return this->first_name;
}

std::string
contact::getLastName()
{
	return this->last_name;
}

std::string
contact::getNickname()
{
	return this->nickname;
}

std::string
contact::getLogin()
{
	return this->login;
}

std::string
contact::getPostalAdress()
{
	return this->postal_address;
}

std::string
contact::getEmailAdress()
{
	return this->email_address;
}

std::string
contact::getPhoneNumber()
{
	return this->phone_number;
}

std::string
contact::getBirthday()
{
	return this->birthday_date;
}

std::string
contact::getMeal()
{
	return this->favorite_meal;
}

std::string
contact::getUnderwear()
{
	return this->underwear_color;
}

std::string
contact::getSecret()
{
	return this->darkest_secret;
}

void
contact::setFirstName(std::string str)
{
	this->first_name = str;
}

void
contact::setLastName(std::string str)
{
	this->last_name = str;
}

void
contact::setNickname(std::string str)
{
	this->nickname = str;
}

void
contact::setLogin(std::string str)
{
	this->login = str;
}

void
contact::setPostalAdress(std::string str)
{
	this->postal_address = str;
}
void

contact::setEmailAdress(std::string str)
{
	this->email_address = str;
}

void
contact::setPhoneNumber(std::string str)
{
	this->phone_number = str;
}

void
contact::setBirthday(std::string str)
{
	this->birthday_date = str;
}

void
contact::setMeal(std::string str)
{
	this->favorite_meal = str;
}

void
contact::setUnderwear(std::string str)
{
	this->underwear_color = str;
}

void
contact::setSecret(std::string str)
{
	this->darkest_secret = str;
}
