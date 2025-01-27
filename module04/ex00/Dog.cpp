#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &other)
{
    std::cout << "Dog Copy Constructor called" << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog Assignment Operator called" << std::endl;
    if (this == &other)
        return(*this);
	this->type = other.type;
    return(*this);
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof! Woof!" << std::endl;
}
