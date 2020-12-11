#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* moi = new Character("moi");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    moi->equip(tmp);
    tmp = src->createMateria("cure");
    moi->equip(tmp);
    ICharacter* bob = new Character("bob");
    moi->use(0, *bob);
    moi->use(1, *bob);

    delete bob;
    delete moi;
    delete src;

    std::cout << "\n---------\n" << std::endl;

    AMateria *otters;
    AMateria *tmp1;
    IMateriaSource* mat = new MateriaSource();
    ICharacter* me = new Character("me");
    AMateria *pony;
    mat->learnMateria(new Ice());
    
	mat->learnMateria(new Cure());
    otters = mat->createMateria("cure");
    me->equip(otters);

    pony = mat->createMateria("ice");
    me->equip(pony);

    ICharacter* bill = new Character("bob");
    std::cout << "pony _xp :" << pony->getXP() << std::endl;
    me->use(1, *bill);
    pony->use(*me);
    std::cout << "pony _xp :" << pony->getXP() << std::endl;
    std::cout << "otters _xp :" << otters->getXP() << std::endl;
    me->use(0, *bill);
    std::cout << "otters _xp :" << otters->getXP() << std::endl;
    me->unequip(0);
    me->use(0, *bill);
    std::cout << "otters _xp :" << otters->getXP() << std::endl;

    tmp1 = mat->createMateria("ice");
    me->equip(tmp1);
    tmp1 = mat->createMateria("water");
    me->equip(tmp1);
    tmp1 = mat->createMateria("water");
    me->equip(tmp1);
    tmp1 = mat->createMateria("cure");
    me->equip(tmp1);

    me->use(2, *bill);
    me->use(3, *bill);
    me->use(4, *bill);
    
    delete mat;
    delete me;
    delete bill;
    

}