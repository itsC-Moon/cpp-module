#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &other)
{
    std::cout << "Dog Copy Constructor called" << std::endl;
	this->brain = new Brain();
    *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this == &other)
        return(*this);
	Animal::operator=(other);
	*this->brain = *other.brain;
    return(*this);
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof! Woof!" << std::endl;
}
