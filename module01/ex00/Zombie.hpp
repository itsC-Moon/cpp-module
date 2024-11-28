#ifndef Zombie_H
#define Zombie_H

#include <string>

class Zombie
{
	private:
		std::string name;

	public:
		void announce(void);
		Zombie(std::string name);
		~Zombie();
		Zombie();
		void setName(const std::string &name);
};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

#endif
