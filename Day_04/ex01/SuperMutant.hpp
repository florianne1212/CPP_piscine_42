#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:

public:
    SuperMutant();
    virtual ~SuperMutant();
    SuperMutant(SuperMutant const & copy);
    
    SuperMutant & operator=(SuperMutant const & ope);
    void takeDamage(int damage);
};


#endif