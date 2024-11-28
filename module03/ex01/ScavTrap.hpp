#ifndef ScavTrap_H
# define ScavTrap_H
# include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		~ScavTrap();

		ScavTrap(const std::string &name) ;
		ScavTrap(const ScavTrap &other);
		ScavTrap& operator=(const ScavTrap &other);
		void guardGate();
		void attack(const std::string& target);
};

#endif
