#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &other)
{
    std::cout << "Cat Copy Constructor called" << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat Assignment Operator called" << std::endl;
    
    if (this == &other)
        return(*this);
    this->type = other.type;
    return(*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow! Meow!" << std::endl;
}
