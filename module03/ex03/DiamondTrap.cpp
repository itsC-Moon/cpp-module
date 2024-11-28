#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}
DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), name(name)
{
	std::cout << "DiamondTrap named constructor called for " << name << std::endl;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap assignment operator called" << std::endl;
	ClapTrap::operator=(other);
	this->name = other.name;
	return (*this);
}

DiamondTrap::~DiamondTrap() 
{
	std::cout << "DiamondTrap destructor called for " << this->name << std::endl;
}
void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap " << this->name << " aka ClapTrap " << ClapTrap::name << std::endl;
}

const std::string  &DiamondTrap::getDiamondTrapName() const 
{
	return (this->name);
}
