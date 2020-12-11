#include "Character.hpp"

Character::Character()
{

}

Character::Character(std::string const & name): 
_name(name),
_weapon(NULL)
{
	_ap = 40;
}

Character::Character(Character const & copy)
{
	*this = copy;
	return;
}

Character::~Character()
{

}

Character & Character::operator=(Character const & ope)
{
	if (this != &ope)
	{
		this->_name = ope._name;
	}
	return (*this);
}

void Character::recoverAP()
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void Character::equip(AWeapon* aweapon)
{
	_weapon = aweapon;
}

void Character::attack(Enemy* enemy)
{
	int ap_need;

	if (this->_weapon == 0)
	{
		std::cout << "missing weapon to attack" << std::endl;
	}
	if (enemy == 0)
    {
        std::cout << "no enemy to attack" << std::endl;
    }

	ap_need = _ap - _weapon->getAPCost();
	if (ap_need < 0)
		return;
	else
		_ap -= _weapon->getAPCost();
	
	std::cout << _name << "  attaque " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
	_weapon->attack();

	enemy->takeDamage(_weapon->getDamage());
	if (enemy->getHP() <= 0)
	{
		delete enemy;
		enemy = NULL;
	}

}

const std::string & Character::getName() const
{
	return _name;
}

int Character::getAp() const
{
	return _ap;
}

AWeapon* Character::getAweapon() const
{
	return _weapon;
}

std::ostream &operator<<(std::ostream &stream, Character const &character)
{
	AWeapon *weapon = character.getAweapon();

	if (weapon == NULL)
		stream << character.getName() << " has " << character.getAp() << " AP and is unarmed" << std::endl; 
	else
		stream << character.getName() << " has " << character.getAp() << " AP and carries a " << weapon->getName() << std::endl;
	return (stream);
}