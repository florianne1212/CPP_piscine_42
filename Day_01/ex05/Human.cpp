#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

std::string Human::identify() const
{

    std::string address;
    address = _brain.identify();
    return(address);
}

const Brain &Human::getBrain()
{
	return _brain;
}