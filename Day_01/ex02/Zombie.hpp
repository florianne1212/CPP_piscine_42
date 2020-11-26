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
		Zombie(std::string name, std::string type);

};

#endif