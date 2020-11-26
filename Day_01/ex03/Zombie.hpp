#ifndef ZOMBIE_H
# define ZOMBIE_H

#include "string"

class Zombie
{
	private:
		std::string name;
		std::string	type;
	public:
		void	announce();
		Zombie(void);
		Zombie(std::string name, std::string type);
		void	setName(std::string);
		void	setType(std::string);

};

#endif