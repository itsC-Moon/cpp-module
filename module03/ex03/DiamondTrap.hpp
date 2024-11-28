
#ifndef DiamondTrap_H
#define DiamondTrap_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

class DiamondTrap
: public ScavTrap, public FragTrap
{
	private:
		std::string name;

	public:
		DiamondTrap();
		DiamondTrap(const std::string &name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap &operator=(const DiamondTrap &other);
		void attack(const std::string &str);
		const std::string  &getDiamondTrapName() const ;
		void whoAmI();
};

#endif
