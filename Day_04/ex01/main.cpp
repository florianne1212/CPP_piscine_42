#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"

int main(){
    Character* moi = new Character("moi");
    
    std::cout << *moi;
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    moi->equip(pr);
    std::cout << *moi;
    moi->equip(pf);
    moi->attack(b);
    std::cout << *moi;
    moi->equip(pr);
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;
    
    delete moi;
	delete pr;
	delete pf;

	std::cout << "\n---------\n" << std::endl;

	AWeapon* rifle = new(PlasmaRifle);
	PowerFist fist;
	Character* bob = new Character("bob");
	Enemy* bad_guy = new SuperMutant();

	std::cout << "info about rifle : \nap = " << rifle->getAPCost() << std::endl;
	std::cout << "name =" << rifle->getName() << std::endl;
	std::cout << "damage =" << rifle->getDamage() << "\n" << std::endl;

	std::cout << "info about fist : \nap = " << fist.getAPCost() << std::endl;
	std::cout << "name =" << fist.getName() << std::endl;
	std::cout << "damage =" << fist.getDamage() << "\n" << std::endl;

	std::cout << *bob;
	bob->equip(rifle);
	std::cout << *bob;

	std::cout << "info about bad_guy : \ntype = " << bad_guy->getType() << std::endl;
	std::cout << "HP =" << bad_guy->getHP() << std::endl;

	bob->attack(bad_guy);

	
	std::cout << *bob;
	std::cout << "HP =" << bad_guy->getHP() << std::endl;
	bob->attack(bad_guy);
	bob->attack(bad_guy);
	bob->attack(bad_guy);
	bob->attack(bad_guy);
	std::cout << *bob;
	bob->attack(bad_guy);
	bob->attack(bad_guy);
	bob->attack(bad_guy);
	std::cout << *bob;
	bob->attack(bad_guy);
	std::cout << "HP =" << bad_guy->getHP() << std::endl;

	delete bob;
	delete bad_guy;
	delete rifle;

	return 0;


}