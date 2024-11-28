#ifndef AMateria_H
# define AMateria_H

#include <string>
#include "ICharacter.hpp"


class AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		virtual ~AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria &other);
		AMateria& operator=(const AMateria &other);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
