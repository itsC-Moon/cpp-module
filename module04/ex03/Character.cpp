
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
}

Character::Character(const std::string &name) : name(name)
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
}

Character::Character(const Character &other)
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
	*this = other;
}

Character &Character::operator=(const Character &other)
{
	if (this == &other)
		return (*this);
	this->name = other.name;
	for (int i = 0; i < 4; i++)
	{
		if (other.materia[i])
			this->materia[i] = other.materia[i]->clone();
	}
	return (*this);
}

Character::~Character() {}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->materia[i])
		{
			this->materia[i] = m; // TODO: should be clone ?
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return;
	this->materia[idx] = NULL; // TODO: if it clone does impl some kind of garbge collector
}

void Character::use(int idx, ICharacter &target) 
{

	if (idx < 0 || idx > 3)
		return;
	if (!this->materia[idx])
		return ;
	this->materia[idx]->use(target);
}
