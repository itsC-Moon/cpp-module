#ifndef Animal_H
# define Animal_H
#include <string>
#include <iostream>
class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &other);
		Animal& operator=(const Animal &other);
		virtual ~Animal();
		virtual void makeSound() const;
		const std::string &getType() const;
};

#endif
