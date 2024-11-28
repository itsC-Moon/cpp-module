#ifndef HumanA_H
#define HumanA_H
#include "Weapon.hpp"
class HumanA
{
  private:
	std::string	name;
	Weapon		&weapon;

  public:
	HumanA(std::string name, Weapon &weapon);
	void setWeapon(Weapon &weapon);
	void attack(void);
	~HumanA();
};

#endif
