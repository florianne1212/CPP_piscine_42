#ifndef FORM_H
# define FORM_H

#include <string>
#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string _name;
    const int _grade_sign;
    const int _grade_execute;
    bool _signed;

public:
    Form();
    Form(std::string const name, const int grade_sign , const int grade_execute);
    Form(Form const & copy);
    ~Form();

    Form & operator=(Form const & ope);

    const std::string getName() const;
    int getGradeSign() const;
    int getGradeExecute() const;
    bool getSigned() const;

    void beSigned(Bureaucrat &bureau);

    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
    
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
};

std::ostream &operator<<(std::ostream &stream, Form const &form);

#endif