#ifndef RADSCORPION_H
# define RADSCORPION_H

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:

public:
    RadScorpion();
    ~RadScorpion();
    RadScorpion(RadScorpion const & copy);
    
    RadScorpion & operator=(RadScorpion const & ope);
};

#endif