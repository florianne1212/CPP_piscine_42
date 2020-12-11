/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <fcoudert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 10:55:30 by fcoudert          #+#    #+#             */
/*   Updated: 2020/12/05 11:45:37 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
Form("Presidential Pardon Form", 25, 5),
_target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy): Form(copy)
{
    this->operator= (copy);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & ope)
{
    Form::operator= (ope);
    return(*this);
}

void PresidentialPardonForm::execute_action()const
{
    std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}