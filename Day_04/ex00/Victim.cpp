#include "Victim.hpp"

Victim::Victim()
{
}

Victim::Victim(std::string name):
_name(name)
{
    std::cout << "A random victim called " << name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "The victim " << this->_name << " died for no apparent reasons!" << std::endl;
}

Victim::Victim(Victim const & copy)
{
    *this = copy;
    std::cout << "Copied" << std::endl;
    return;
}

Victim & Victim::operator=(Victim const & ope)
{
    if (this != &ope)
    {
        this->_name = ope._name;
    }
    return (*this);
}

void Victim::getPolymorphed() const
{
    std::cout << this->_name <<" was just polymorphed in a cute little sheep!" << std::endl;
}

const std::string &Victim::getName(void) const
{
    return(this->_name);
}

std::ostream &operator<<(std::ostream &stream, Victim const &victi)
{
    stream << "I am " << victi.getName() << " and I like otters!" << std::endl; 
    return (stream);
}