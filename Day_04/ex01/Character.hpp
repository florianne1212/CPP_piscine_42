#ifndef CHARACTER_H
# define CHARACTER_H

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
    Character();
    std::string _name;
    int _ap;
    AWeapon *_weapon;
public:
    
    Character(std::string const & name);
    Character(Character const & copy);
    ~Character();

    Character & operator=(Character const & ope);

    void recoverAP();
    void equip(AWeapon* aweapon);
    void attack(Enemy* enemy);

    const std::string &getName() const;
    int getAp() const;
    AWeapon* getAweapon() const;
};

std::ostream &operator<<(std::ostream &stream, Character const &character);

#endif