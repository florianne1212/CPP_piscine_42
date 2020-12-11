#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer(std::string name, std::string title):
_name(name),
_title(title)
{
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & copy)
{
    *this = copy;
    std::cout << "Copied" << std::endl;
    return;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & ope)
{
    if (this != &ope)
    {
        this->_name = ope._name;
        this->_title = ope._title;
    }
    return (*this);
}

void Sorcerer::polymorph(Victim const &victim) const
{
    victim.getPolymorphed();
}

const std::string &Sorcerer::getName(void) const
{
    return(this->_name);
}

const std::string &Sorcerer::getTitle(void) const
{
    return(this->_title);
}

std::ostream &operator<<(std::ostream &stream, Sorcerer const &sorcer)
{
    stream << "I am " << sorcer.getName() << " , " <<  sorcer.getTitle() <<  ", and i like ponies!" << std::endl; 
    return (stream);
}