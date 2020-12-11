#include "Squad.hpp"

Squad::Squad() :
_unit(NULL),
_count(0)
{
}

Squad::Squad(Squad const & copy)
{
    this->operator=(copy);
}

Squad::~Squad()
{
	if(this->_unit)
	{
		for (int i = 0; i < this->_count; i++)
		{
			delete(this->_unit[i]);
		}
		delete(this->_unit);
	}
}

Squad & Squad::operator=(Squad const & ope)
{
	if (this != &ope)
    {
		if(this->_unit)
		{
			for (int i = 0; i < this->_count; i++)
				delete(this->_unit[i]);
			delete(this->_unit);
			this->_unit = NULL;
		}
		int i;
		for (i = 0; i < ope.getCount(); i++)
		{
			this->push(ope._unit[i]);
		}
		this->_count = ope._count;
    }
    return (*this);
}

int Squad::getCount() const
{
	return (this->_count);
}

ISpaceMarine* Squad::getUnit(int rank) const
{
	if (rank >= 0 && rank < this->_count)
		return(this->_unit[rank]);
	else
		return(NULL);
}

int Squad::push(ISpaceMarine* new_one)
{
	if(!new_one)
		return (this->_count);
	if(this->_unit)
	{
		int i = 0;
		for (; i < this->_count; i++)
		{
			if (this->_unit[i] == new_one)
				return(this->_count);
		}
		ISpaceMarine** new_units = new ISpaceMarine*[this->_count + 1];
		i = 0;
		for (; i < this->_count; i++)
			new_units[i] = this->_unit[i];
		new_units[i] = new_one;

		delete [] this->_unit;

		this->_count++;
		this->_unit = new_units;
	}
	else
	{
		this->_unit = new ISpaceMarine*[1];
		this->_unit[0] = new_one;
		this->_count = 1;
	}
	return this->_count;
}
