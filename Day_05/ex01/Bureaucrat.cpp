/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <fcoudert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 09:37:45 by fcoudert          #+#    #+#             */
/*   Updated: 2020/12/05 09:38:11 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string const name, int grade):
_name(name)
{
	try
	{
		if(grade > 0 && grade <= 150)
			_grade = grade;
		else if (grade <= 0)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy)
{
	this->operator= (copy);
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & ope)
{
	try
	{
		if(ope._grade > 0 && ope._grade <= 150)
			this->_grade = ope._grade;
		else if (ope._grade <= 0)
			throw GradeTooHighException();
		else if (ope._grade > 150)
			throw GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return(*this);
}

const std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::signForm(Form &form)
{
	
	if (form.getSigned() == true)
	{
		std::cout << "Form " << form.getName() << " already signed" << std::endl;
		return;
	}
	form.beSigned(*this);
	if (form.getSigned() == true)
		std::cout << _name << " signs " << form.getName() << std::endl;
	else
		std::cout << _name << " can't sign " << form.getName() << " because his grade is too low" << std::endl;
}

void    Bureaucrat::increment()
{
	try
	{
		_grade--;
		if (_grade < 1)
			throw GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void    Bureaucrat::decrement()
{
	try
	{
		_grade++;
		if (_grade > 150)
			throw GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error : grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error : grade is too low");
}

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &bureau)
{
	stream << bureau.getName() << " bureaucrat grade " << bureau.getGrade() << "." << std::endl; 
    return (stream);
}
