#include "ClapTrap.hpp"
#include <iostream>

void printClapTrapInfo(const ClapTrap& object)
{
	std::cout << std::endl;
	std::cout << "Name: " << object.getName() << std::endl;
	std::cout << "hit points: " << object.getHitPoints() << std::endl;
	std::cout << "energy points: " << object.getEnergyPoints() << std::endl;
	std::cout << "attack damage: " << object.getAttackDamage() << std::endl;

	std::cout << std::endl;
}

int main( void )
{
	ClapTrap robot1("X");
	ClapTrap robot2("Y");

	robot1.attack("Y");
	robot2.takeDamage(5);

	robot2.beRepaired(5);
	printClapTrapInfo(robot1);
	printClapTrapInfo(robot2);
}
