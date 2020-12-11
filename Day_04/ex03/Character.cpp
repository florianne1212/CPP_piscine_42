#include "Character.hpp"

Character::Character()
{

}

Character::Character(std::string name):
_name(name),
_count(0)
{
    for (size_t i = 0; i < 4; i++)
    {
        _inventory[i] = NULL;
    }
}

Character::Character(Character const & copy)
{
    this->operator=(copy);
}

Character::~Character()
{
	for (int i = 0; i < this->_count; i++)
	{
        if(this->_inventory[i] != NULL)
        {
		    delete(this->_inventory[i]);
            this->_inventory[i] = NULL;
        }
	}
}

Character & Character::operator=(Character const & ope)
{
    if (this != &ope)
    {
        this->_name = ope._name;

		for (int i = 0; i < this->_count; i++)
			delete(this->_inventory[i]);
		int i;
		for (i = 0; i < ope._count; i++)
		{
			this->_inventory[i] = ope._inventory[i]->clone();
		}
		this->_count = ope._count;
    }
    return (*this);
}

std::string const & Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria* m)
{
    if(_count != 4 && m != 0)
    {
        for (int i = 0; i < _count; i++)
        {
            if(_inventory[i] == m)
                return;
        }
        _inventory[_count] = m;
        _count++;
    }
    return;

}

void Character::unequip(int idx)
{
    if(idx >= 0 && idx <= _count)
    {
        _inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if(idx >= 0 && idx <= _count && _inventory[idx] != NULL)
    {
        _inventory[idx]->use(target);
    }
}
