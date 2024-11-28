
#ifndef WrongAnimal_H
# define WrongAnimal_H
#include <string>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal& operator=(const WrongAnimal &other);
		void makeSound() const;
		const std::string &getType() const ;
};

#endif
