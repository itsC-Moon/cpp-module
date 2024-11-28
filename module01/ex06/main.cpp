#include <iostream>
#include "Harl.hpp"
int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "only one complaints is allowed" << std::endl;
		return 1;
	}
	Harl harl;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int idx = -1;

	std::string str(av[1]);
	for (int i = 0; i < 4; i++)
		idx = (str == levels[i]) ? i : idx;

	switch (idx)
	{
		case 0:
			std::cout << "[ DEBUG ]\n";
			harl.complain("DEBUG");
			std::cout << std::endl;
		case 1:
			std::cout << "[ INFO ]\n";
			harl.complain("INFO");
			std::cout << std::endl;
		case 2:
			std::cout << "[ WARNING ]\n";
			harl.complain("WARNING");
			std::cout << std::endl;
		case 3:
			std::cout << "[ ERROR ]\n";
			harl.complain("ERROR");
			std::cout << std::endl;
			break;
		default: std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}
