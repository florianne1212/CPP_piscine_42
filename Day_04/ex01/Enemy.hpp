#ifndef ENEMY_H
# define ENEMY_H

#include <string>
#include <iostream>

class Enemy
{
private:
    int _hp;
    std::string _type;
protected :
    Enemy();
public:
    Enemy(int hp, std::string const & type);
    Enemy(Enemy const & copy);
    virtual ~Enemy();

    Enemy & operator=(Enemy const & ope);

    const std::string & getType() const;
    int getHP() const;
    
    virtual void takeDamage(int damage);
};

#endif