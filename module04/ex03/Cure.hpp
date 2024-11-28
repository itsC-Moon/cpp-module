
#ifndef Cure_H
# define Cure_H
#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(const Cure &other);
		Cure& operator=(const Cure &other);
		AMateria* clone() const;
		void use(ICharacter& target);

};

#endif
