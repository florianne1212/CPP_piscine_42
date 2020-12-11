#include "Peon.hpp"

Peon::Peon() : Victim()
{
}

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & copy)
{
    *this = copy;
    std::cout << "Copied" << std::endl;
    return;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

Peon & Peon::operator=(Peon const & ope)
{
    if (this != &ope)
    {
        Victim::operator=(ope);
    }
    return (*this);
}

void Peon::getPolymorphed() const
{
    std::cout << this->_name << "was just polymorphed into a pink pony!" << std::endl;
}