
#ifndef Fixed_H
#define Fixed_H

#include <iostream>
// 1bit for sign
// 8-bit Exponent
// 23 Mantissa
// sign * (1 + mantissa) * 2 ^(exponet - 127)
class Fixed
{
  private:
	static const int fractional = 8;
	int					rawBits;

  public:
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed();
	~Fixed();
	Fixed(const Fixed &other);
	Fixed(const int n);
	Fixed(const float n);
	Fixed &operator=(const Fixed &other);

	int toInt(void) const;
	float toFloat(void) const;

	bool operator<(const Fixed &other) const ;
	bool operator<=(const Fixed &other) const;
	bool operator>(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator==(const Fixed &other) const;
	bool operator!=(const Fixed &other) const;

	Fixed operator+(const Fixed &other) const;
	Fixed operator-(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;

	Fixed &operator++();
	Fixed operator++(int);

	Fixed &operator--();
	Fixed operator--(int);
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);

	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
};
std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
#endif
