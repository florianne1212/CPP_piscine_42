/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <fcoudert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 14:47:10 by fcoudert          #+#    #+#             */
/*   Updated: 2020/12/06 12:42:12 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

static Form *makePresident(std::string target);
static Form *makeRobot(std::string arget);
static Form *makeShrub(std::string target);

Intern::Intern()
{
}

Intern::Intern(Intern const & copy)
{
	this->operator=(copy);
}

Intern::~Intern()
{
	
}

Intern & Intern::operator=(Intern const & ope)
{
	(void)ope;
	return (*this);
	
}

static Form *makePresident(std::string target)
{
	PresidentialPardonForm *President;
	President = new PresidentialPardonForm(target);
	return(President);
}

static Form *makeRobot(std::string target)
{
	RobotomyRequestForm *Robot;
	Robot = new RobotomyRequestForm(target);
	return(Robot);
}

static Form *makeShrub(std::string target)
{
	ShrubberyCreationForm *Shrub;
	Shrub = new ShrubberyCreationForm(target);
	return(Shrub);
}

Form* Intern::makeForm(std::string name, std::string target)
{
	typedef Form* (*form_funct)(std::string target);
	form_funct  funct_form[3];
	funct_form[0] = &makeShrub;
	funct_form[1] = &makePresident;
	funct_form[2] = &makeRobot;

	std::string name_form[3];
	name_form[0] = "shrubbery creation";
	name_form[1] = "presidential pardon";
	name_form[2] = "robotomy request";

	for (int i = 0; i < 3; i++)
	{
		if(name_form[i] == name)
		{
			std::cout << "Intern creates " << name << std::endl;
			return funct_form[i](target);
		}
	}
	std::cout << "Form not found make sure yout typed the right name : robotomy request, presidential pardon or shrubbery creation" << std::endl;
	return 0;
}