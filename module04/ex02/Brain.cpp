#include "Brain.hpp"

#include <iostream>

Brain::Brain()
{
    std::cout << "Brain: Default constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain: Copy constructor called" << std::endl;
    *this = other;
}

Brain &Brain::operator=(const Brain &other)
{
    if (this == &other)
        return (*this);
    for (int i = 0; i < 100; i++)
        this->idea[i] = other.idea[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain: Destructor called" << std::endl;
}
