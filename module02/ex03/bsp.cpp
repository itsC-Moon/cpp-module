#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed d1 = point.sign(point, a, b);
	Fixed d2 = point.sign(point, b, c);
	Fixed d3 = point.sign(point, c, a);

	bool hasNeg = (d1 < 0) && (d2 < 0) && (d3 < 0);
	bool hasPos = (d1 > 0) && (d2 > 0) && (d3 > 0);

	if (hasPos || hasNeg)
		return (true);
	return (false);
}
