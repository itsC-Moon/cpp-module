#include "HumanB.hpp"
#include <iostream>
#include <ostream>
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : weapon(NULL), name(name) {}

void HumanB::attack(void)
{
	std::cout << this->name << "  attacks with their " << (this->weapon ? this->weapon->getType() : "") << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

HumanB::~HumanB() {}
