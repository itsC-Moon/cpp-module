#include "Fixed.hpp"
#include <cmath>
#include <iostream>
#include <ostream>

Fixed::Fixed()
{
	this->rawBits = 0;
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this == &other)
		return (*this);
	this->rawBits = other.rawBits;
	return (*this);
}

Fixed::~Fixed() {}

void Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
}

int Fixed::getRawBits(void) const
{
	return (this->rawBits);
}

Fixed::Fixed(const int n)
{
	this->rawBits = (n << this->fractional);
}

Fixed::Fixed(const float n)
{
	this->rawBits = roundf(n * (float)(1 << this->fractional));
}

int Fixed::toInt(void) const
{
	return (this->rawBits >> this->fractional);
}

float Fixed::toFloat(void) const
{
	double result = (double)this->rawBits / (double)(1 << this->fractional);
	return result;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
	Fixed result;
	result.setRawBits(fixed.rawBits + this->rawBits);
	return (result);
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	Fixed result;

	result.setRawBits(fixed.rawBits - this->rawBits);
	return (result);
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	Fixed result;

	result.setRawBits((fixed.rawBits * this->rawBits) >> this->fractional);
	return (result);
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	Fixed result;
	result.setRawBits((long)(this->rawBits << this->fractional) / fixed.rawBits);
	return (result);
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (this->rawBits < fixed.rawBits);
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return (this->rawBits > fixed.rawBits);
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return (this->rawBits <= fixed.rawBits);
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return (this->rawBits >= fixed.rawBits);
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (this->rawBits == fixed.rawBits);
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return (this->rawBits != fixed.rawBits);
}

Fixed Fixed::operator++(int)
{
	Fixed a(*this);
	this->rawBits += 1;
	return (a);
}

Fixed &Fixed::operator++()
{
	this->rawBits += 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed a(*this);
	this->rawBits -= 1;
	return (a);
}

Fixed &Fixed::operator--()
{
	this->rawBits -= 1;
	return (*this);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

