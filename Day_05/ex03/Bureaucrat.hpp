#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>
#include <exception>

#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    std::string const _name;
    int _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string const name, int grade);
    Bureaucrat(Bureaucrat const & copy);
    ~Bureaucrat();

    Bureaucrat & operator=(Bureaucrat const & ope);

    const std::string getName() const;
    int getGrade() const;

    void    increment();
    void    decrement();

    void signForm(Form &form);
    void executeForm(Form & form);

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

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &bureau);

#endif
