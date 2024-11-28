#ifndef Weapon_H
# define Weapon_H
#include <string>
class Weapon
{
  private:
	std::string type;
  public:
	const std::string &getType(void);
	void setType(const std::string &type);
	Weapon(const std::string &type);
	Weapon();
	~Weapon();
};

#endif
