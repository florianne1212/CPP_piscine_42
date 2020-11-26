#ifndef MANAGE_H
# define MANAGE_H

#include "contact.hpp"
#include <iomanip>

class manage
{
private:

public:
	manage();
	~manage();
	void	add_contact(void);
	void	show_contact(void);
	void	ask_index(void);
	void	print_contact(std::string str1, std::string str2);
	void	print_format(std::string str);
	contact contact_tab[8];
	int		index;
};

#endif