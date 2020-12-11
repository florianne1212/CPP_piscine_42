/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <fcoudert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 10:55:22 by fcoudert          #+#    #+#             */
/*   Updated: 2020/12/05 14:34:21 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
Form("Robotomy Request Form", 72, 45),
_target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy): Form(copy)
{
    this->operator= (copy);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & ope)
{
    Form::operator= (ope);
    return(*this);
}

void RobotomyRequestForm::execute_action()const
{
    int i = 0;
    
    if((i = rand() % 10) % 2 == 1)
    {
        std::cout << "* brrrr zzz brrrr zzz brrrr zzz *" << std::endl;
        std::cout << _target << " has been robotomized successfully" << std::endl;
    }
    else
        std::cout << "failure to robotomized " << _target << std::endl;
    
}