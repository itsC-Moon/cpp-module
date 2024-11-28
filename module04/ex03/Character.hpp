#ifndef Character_H
#define Character_H

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *materia[4];

	public:
		Character();
		Character(const std::string &name);
		~Character();
		Character(const Character &other);
		Character &operator=(const Character &other);
		std::string const &getName() const ;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif
