#include "FragTrap.hpp"
#include <iostream>

void printFragTrapInfo(FragTrap& object)
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
	FragTrap robot1("X");
	FragTrap robot2("X");

	robot1.attack("Y");
	robot2.takeDamage(20);
	robot2.beRepaired(50);
	robot1.highFivesGuys();
	printFragTrapInfo(robot2);
	printFragTrapInfo(robot1);
}
