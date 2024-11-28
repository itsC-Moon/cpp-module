#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

#define RED  "\033[31m"
#define GREEN  "\033[32m"
int main(void)
{
    Point a(0, 0);
    Point b(10, 0);
    Point c(5, 5);

	Point points[] = {
		Point(5, 2),
		Point(-5, 5),
		Point(3, 0),
		Point(5, 5)
	};

	int size = sizeof(points) / sizeof(points[0]);

	for (int i = 0; i < size; i++)
	{
		if (bsp(a, b, c, points[i]))
			std::cout << GREEN << points[i] << ": Is inside the triangle" << std::endl;
		else
			std::cout << RED << points[i] << ": Is outside the triangle" << std::endl;
	}
	return 0;
}
