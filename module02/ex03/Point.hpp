#ifndef Point_H
#define Point_H

#include <ostream>
#include "Fixed.hpp"
class Point
{
	private:
		const Fixed x;
		const Fixed y;

	public:
		Point();
		Point(const float x, const float y);
		~Point();
		Point(const Point &other);
		Point operator=(const Point &other);
		bool operator==(const Point &other) const; 
		Fixed sign(const Point &a, const Point &b, const Point &c) const;
		const Fixed &getX() const ;
		const Fixed &getY() const ;
};

std::ostream &operator<<(std::ostream &os, Point &p);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
