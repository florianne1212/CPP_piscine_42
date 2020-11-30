#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(100, 100, 120, 120, 1, 60, 20, 5, "unnamed") , FragTrap(), NinjaTrap()
{
	std::cout << "Construction of SuperTrap ..." << std::endl;
}


SuperTrap::SuperTrap(std::string name) : ClapTrap(100, 100, 120, 120, 1, 60, 20, 5, name) , FragTrap(name), NinjaTrap(name)
{
	std::cout << "Construction of SuperTrap ..." << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & copy) : ClapTrap(copy), FragTrap(copy), NinjaTrap(copy)
{
	*this = copy;
	std::cout << "Copied" << std::endl;
	return;
}

SuperTrap::~SuperTrap()
{
	std::cout << "Deconstruction of SuperTrap ..." << std::endl;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & ope)
{
	if (this != &ope)
	{
		this->_Hit_points = ope._Hit_points;
		this->_Max_Hit_points = ope._Max_Hit_points;
		this->_Energy_points = ope._Energy_points;
		this->_Max_Energy_points = ope._Max_Energy_points;
		this->_Level = ope._Level;
		this->_Name = ope._Name;
		this->_Melee_attack_damage = ope._Melee_attack_damage;
		this->_Ranged_attack_damage = ope._Ranged_attack_damage;
		this->_Armor_damage_destruction = ope._Armor_damage_destruction;
	}
	std::cout << "Assignation" << std::endl;
	return (*this);
}

void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}


int SuperTrap::getHitPoint(void)
{
	return(this->_Hit_points);
}

int SuperTrap::getMaxHitPoint(void)
{
	return(this->_Max_Hit_points);
}

int SuperTrap::getEnergyPoint(void)
{
	return(this->_Energy_points);
}

int SuperTrap::getMaxEnergyPoint(void)
{
	return(this->_Max_Energy_points);
}

int SuperTrap::getLevel(void)
{
	return(this->_Level);
}

int SuperTrap::getMeleeAttackDamage(void)
{
	return(this->_Melee_attack_damage);
}

int SuperTrap::getRangedAttackDamage(void)
{
	return(this->_Ranged_attack_damage);
}

int SuperTrap::getArmorDamageReduction(void)
{
	return(this->_Armor_damage_destruction);
}