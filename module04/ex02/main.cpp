#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal **zoo = new Animal *[20];
	for (int i = 0; i < 20; i++)
	{
		if (i & 1)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}
	for (int i = 0; i < 20; i++)
		zoo[i]->makeSound();
	for (int i = 0; i < 20; i++)
		delete zoo[i];
	delete[] zoo;
	return 0;
}
