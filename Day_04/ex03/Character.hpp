#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    std::string _name;
    int         _count;
    AMateria *_inventory[4];
    Character();
public:
    Character(std::string name);
    Character(Character const & copy);
    virtual ~Character();

    Character & operator=(Character const & ope);

    virtual std::string const & getName() const;

    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};


#endif