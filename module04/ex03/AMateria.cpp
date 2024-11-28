#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this == &other)
		return(*this);
	this->type = other.type;
	return(*this);
}

AMateria::~AMateria()
{
}

void AMateria::use(ICharacter &)
{

}

std::string const & AMateria::getType() const
{
	return (this->type);
}
