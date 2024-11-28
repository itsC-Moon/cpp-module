#include "Animal.hpp"
#include <iostream>

Animal::Animal(): type("Zaid")
{
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

const std::string &Animal::getType() const
{
	return (this->type);
}
