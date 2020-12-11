#include "Cat.hpp"

Cat::Cat() : Victim()
{
}

Cat::Cat(std::string name) : Victim(name)
{
    std::cout << "meow ..." << std::endl;
}

Cat::Cat(Cat const & copy)
{
    *this = copy;
    std::cout << "Copied" << std::endl;
    return;
}

Cat::~Cat()
{
    std::cout << "wouf" << std::endl;
}

Cat & Cat::operator=(Cat const & ope)
{
    if (this != &ope)
    {
        Victim::operator=(ope);
    }
    return (*this);
}

void Cat::getPolymorphed() const
{
    std::cout << this->_name << " was just polymorphed into a dog !" << std::endl;
}