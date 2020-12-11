#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string const _target;
    PresidentialPardonForm();
public:
    PresidentialPardonForm(std::string const target);
    PresidentialPardonForm(PresidentialPardonForm const & copy);
    ~PresidentialPardonForm();

    PresidentialPardonForm & operator=(PresidentialPardonForm const & ope);

    virtual void execute_action()const;
};

#endif