#ifndef SQUAD_H
# define SQUAD_H

#include "ISquad.hpp"

class Squad : public ISquad
{
private:
	ISpaceMarine    **_unit;
	int             _count;
public: 
	Squad();
	Squad(Squad const & copy);
	virtual ~Squad();

	Squad & operator=(Squad const & ope);

	virtual int getCount() const;
    virtual ISpaceMarine* getUnit(int rank) const;
    virtual int push(ISpaceMarine* new_one);
};

#endif