#include "ScavTrap.hpp"
#include <iostream>
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap named constructor called for " << name << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
}


ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	ClapTrap::operator=(other);
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gatekeeper mode" << std::endl;
}
void ScavTrap::attack(const std::string &target)
{
	if (this->energyPoints == 0)
	{
		std::cout << "ScavTrap " << this->name << " is out of energy and cannot attack!" << std::endl;
		return;
	}

	if (this->hitPoints == 0)
	{
		std::cout << "ScavTrap " << this->name << " is already dead and cannot attack!" << std::endl;
		return;
	}

	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage
			  << " points of damage!" << std::endl;
	this->energyPoints--;
}

ScavTrap::~ScavTrap() 
{
	std::cout << "ScavTrap destructor called for " << this->name << std::endl;
}
