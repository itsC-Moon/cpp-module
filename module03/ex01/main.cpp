#include "ScavTrap.hpp"
#include <iostream>

void printScavTrapInfo(const ScavTrap& object)
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
	ScavTrap robot1("X");
	ScavTrap robot2("Y");
	
	robot1.attack("Y");
	robot2.takeDamage(10);
	robot2.beRepaired(10);
	robot1.guardGate();
	printScavTrapInfo(robot1);
	printScavTrapInfo(robot2);
}
