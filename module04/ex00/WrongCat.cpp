#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
    std::cout << "WrongCat: Default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other)
{
    std::cout << "WrongCat: Copy constructor called" << std::endl;
    *this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongCat: Assignment operator called" << std::endl;
    if (this == &other)
        return(*this);
	this->type = type;
    return(*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat: Destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat: Meow meow..!" << std::endl;
}
