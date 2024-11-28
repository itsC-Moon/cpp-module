
#include "DiamondTrap.hpp"
#include <iostream>

void printDiamondTrapInfo(DiamondTrap& object)
{
	std::cout << std::endl;
	std::cout << "Name: " << object.getDiamondTrapName() << std::endl;
	std::cout << "ClapName: " << object.getName() << std::endl;
	std::cout << "hit points: " << object.getHitPoints() << std::endl;
	std::cout << "energy points: " << object.getEnergyPoints() << std::endl;
	std::cout << "attack damage: " << object.getAttackDamage() << std::endl;
	std::cout << std::endl;
}

int main( void )
{
	DiamondTrap	robot1("X");
	DiamondTrap robot2("Y");

	robot1.attack("Y");
	robot2.takeDamage(50);
	robot2.beRepaired(200);
	robot1.guardGate();
	robot1.highFivesGuys();
	robot1.whoAmI();
	printDiamondTrapInfo(robot2);
	printDiamondTrapInfo(robot1);
}
