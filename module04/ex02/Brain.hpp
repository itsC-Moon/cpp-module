
#ifndef Brain_H
# define Brain_H
#include <string>
class Brain
{
	private:
		std::string idea[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain &other);
		Brain& operator=(const Brain &other);
};

#endif
