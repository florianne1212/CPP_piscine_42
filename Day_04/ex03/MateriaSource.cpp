#include "MateriaSource.hpp"

MateriaSource::MateriaSource():
_count(0)
{
	for (size_t i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const & copy)
{
	this->operator=(copy);
}

MateriaSource::~MateriaSource()
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

MateriaSource & MateriaSource::operator=(MateriaSource const & ope)
{
	if (this != &ope)
	{
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

void MateriaSource::learnMateria(AMateria* m)
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

AMateria* MateriaSource::createMateria(std::string const & type)
{

	for (int i = 0; i < _count; i++)
	{
		if(_inventory[i]->getType() == type)
			return(_inventory[i]->clone());
	}
	return(NULL);
}