#ifndef HumanB_H
# define HumanB_H

#include "Weapon.hpp"
class HumanB
{
  private:
	Weapon		*weapon;
	std::string name;

  public:
	HumanB(std::string name);
	void attack(void);
	void setWeapon(Weapon &weapon);
	~HumanB();
};

#endif
