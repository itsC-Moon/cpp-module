#include "Point.hpp"
#include <sys/_types/_ssize_t.h>
#include <cstddef>
#include <cstdint>
#include "Fixed.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::Point(const Point &other) : x(other.x), y(other.y) {}

Point Point::operator=(const Point &other)
{
	if (this == &other)
		return (*this);
	return (Point(other));
}

bool Point::operator==(const Point &other) const
{
	if (this->x == other.x && this->y == other.y)
		return (true);
	return (false);
}

Point::~Point() {}


Fixed Point::sign(const Point &a, const Point &b, const Point &c) const
{
	return ((b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x));
}


std::ostream &operator<<(std::ostream &os, Point &p)
{
	std::cout << "(" << p.getX() << ", " << p.getY() << ")";
	return (os);
}


const Fixed &Point::getX() const
{
	return (this->x);
}

const Fixed &Point::getY() const
{
	return (this->y);
}

