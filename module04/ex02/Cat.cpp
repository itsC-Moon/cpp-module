#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &other)
{
    std::cout << "Cat Copy Constructor called" << std::endl;
	this->brain = new Brain();
    *this = other;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this == &other)
        return(*this);
	Animal::operator=(other);
	*this->brain = *other.brain;
    return(*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
	delete brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow! Meow!" << std::endl;
}
