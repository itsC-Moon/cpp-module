#ifndef ClapTrap_H
#define ClapTrap_H
#include <string>
class ClapTrap
{
  protected:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;

  public:
	const std::string &getName() const;
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap(const std::string &name);
	ClapTrap();
	~ClapTrap();
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);

	unsigned int getAttackDamage() const ;
	unsigned int getEnergyPoints() const ;
	unsigned int getHitPoints() const ;
};

#endif
