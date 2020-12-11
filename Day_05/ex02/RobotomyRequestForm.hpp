#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    std::string const _target;
    RobotomyRequestForm();
public:
    RobotomyRequestForm(std::string const target);
    RobotomyRequestForm(RobotomyRequestForm const & copy);
    ~RobotomyRequestForm();

    RobotomyRequestForm & operator=(RobotomyRequestForm const & ope);

    virtual void execute_action()const;
};

#endif