#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;
	
public:
	contact(/* args */);
	~contact();

	std::string getFirstName();
	std::string getLastName();
	std::string getNickname();
	std::string getLogin();
	std::string getPostalAdress();
	std::string getEmailAdress();
	std::string getPhoneNumber();
	std::string getBirthday();
	std::string getMeal();
	std::string getUnderwear();
	std::string getSecret();

	void setFirstName(std::string str);
	void setLastName(std::string str);
	void setNickname(std::string str);
	void setLogin(std::string str);
	void setPostalAdress(std::string str);
	void setEmailAdress(std::string str);
	void setPhoneNumber(std::string str);
	void setBirthday(std::string str);
	void setMeal(std::string str);
	void setUnderwear(std::string str);
	void setSecret(std::string str);

};

#endif