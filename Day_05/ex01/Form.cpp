/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <fcoudert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 09:38:03 by fcoudert          #+#    #+#             */
/*   Updated: 2020/12/05 09:38:07 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():
_name("unnamed"),
_grade_sign(1),
_grade_execute(1),
_signed(false)
{

}

Form::Form(std::string const name, const int grade_sign , const int grade_execute):
_name(name),
_grade_sign(grade_sign),
_grade_execute(grade_execute),
_signed(false)
{
    if (grade_sign < 1 || grade_execute < 1)
        throw Form::GradeTooHighException();
    if (grade_sign > 150 || grade_execute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const & copy):
_name(copy._name),
_grade_sign(copy._grade_sign),
_grade_execute(copy._grade_execute)
{
    this->operator= (copy);
}

Form::~Form()
{
}
    
Form & Form::operator=(Form const & ope)
{
    if (this != &ope)
        this->_signed = ope._signed;
    
    return (*this);
}

void Form::beSigned(Bureaucrat & bureau)
{
    int grade_bureaucrat = bureau.getGrade();

    try
    {
        if(grade_bureaucrat > _grade_sign)
            throw Form::GradeTooLowException();
        else
        {
            this->_signed = true;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Error : grade is too low");
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Error : grade is too high");
}

const std::string Form::getName() const
{
    return _name;
}

int Form::getGradeSign() const
{
    return _grade_sign;
}

int Form::getGradeExecute() const
{
    return _grade_execute;
}

bool Form::getSigned() const
{
    return _signed;
}


std::ostream &operator<<(std::ostream &stream, Form const &form)
{
	stream <<  form.getName() << " can be signed by grade : " << form.getGradeSign()  << " and can be executed by grade : " << form.getGradeExecute() << std::endl;
    if (form.getSigned() == true)
        stream << "the form has been signed" << std::endl;
    else
        stream << "the form has not been signed yet" << std::endl;

    return (stream);
}