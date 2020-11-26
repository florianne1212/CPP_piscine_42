#ifndef PONY_H
# define PONY_H

#include <string>

class Pony
{
	private :
		std::string	name;
		std::string	color;
		std::string	age;
		std::string	favorite_food;
	
	public:
		Pony(std::string name, std::string color, std::string age, std::string favorite_food);
		~Pony();

		void	tell_name(void);
		void	tell_age(void);
		void	tell_color(void);
		void	tell_favorite_food(void);

	std::string getName();
	std::string getColor();
	std::string getAge();
	std::string getFood();

	void	setName(std::string);
	void	setColor(std::string);
	void	setAge(std::string);
	void	setFood(std::string);

};

#endif