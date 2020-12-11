#ifndef INTERN_H
# define INTERN_H

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:

public:
    Intern();
    Intern(Intern const & copy);
    ~Intern();

    Intern & operator=(Intern const & ope);

    Form* makeForm(std::string name, std::string target);
};


#endif

