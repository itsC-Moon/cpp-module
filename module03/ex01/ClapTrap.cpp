#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0) 
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}
ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) 
{
	std::cout << "ClapTrap named constructor called for " << this->name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->attackDamage = other.attackDamage;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	return (*this);
}

ClapTrap::~ClapTrap() 
{
	std::cout << "ClapTrap destructor called for " << this->name << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " is out of energy and cannot attack!" << std::endl;
		return;
	}

	if (this->hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " is already dead and cannot attack!" << std::endl;
		return;
	}

	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage
		<< " points of damage!" << std::endl;
	this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " is already dead!" << std::endl;
		return;
	}

	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;

	if (amount >= this->hitPoints)
		this->hitPoints = 0;
	else
		this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " is out of energy and cannot repair!" << std::endl;
		return;
	}

	if (this->hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " is already dead and cannot repair!" << std::endl;
		return;
	}

	std::cout << "ClapTrap " << this->name << " repairs itself, restoring " << amount << " points of health!"
		<< std::endl;

	size_t hitPoints = this->hitPoints;
	hitPoints += amount;
	if (hitPoints >= -1U)
		this->hitPoints = -1U;
	else
		this->hitPoints += amount;
	this->energyPoints--;
}

const std::string &ClapTrap::getName() const 
{
	return (this->name);
}

unsigned int ClapTrap::getHitPoints() const 
{
	return (this->hitPoints);
}

unsigned int ClapTrap::getEnergyPoints() const 
{
	return (this->energyPoints);
}

unsigned int ClapTrap::getAttackDamage() const 
{
	return (this->attackDamage);
}
