
#include "HumanA.hpp"
#include <iostream>
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

void HumanA::attack(void)
{
	std::cout << this->name << "  attacks with their " << this->weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &weapon)
{
	this->weapon.setType(weapon.getType());
}

HumanA::~HumanA() {}
