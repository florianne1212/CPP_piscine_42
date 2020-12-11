#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    int         _count;
    AMateria *_inventory[4];
public:
    MateriaSource();
    MateriaSource(MateriaSource const & copy);
    virtual ~MateriaSource();

    MateriaSource & operator=(MateriaSource const & ope);

    virtual void learnMateria(AMateria* m);
    virtual AMateria* createMateria(std::string const & type);
};

#endif