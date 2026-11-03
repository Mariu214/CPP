#include "fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called\n";
	value = 0;
}

Fixed::Fixed(const Fixed &src)
{
	// std::cout << "Copy constructor called\n";
	*this = src;
}

Fixed::Fixed(const int number)
{
	// std::cout << "Int constructor called\n";
	value = number << bits;
}

Fixed::Fixed(const float number)
{
	// std::cout << "Float constructor called\n";
	value = roundf(number * (1 << bits));
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const 
{
	// std::cout << "getRawBits member function called\n";
	return value;
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "getRawBits member function called\n";
	value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)value / (float)(1 << bits));
}

int	Fixed::toInt( void ) const
{
	return (value >> bits) ;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	// std::cout << "Copy assignment operator called\n";
	if (this != &other)
	{
		value = other.value;
	}
	return *this;
}

Fixed Fixed::operator+(const Fixed &other) const
{
	return this->toFloat() + other.toFloat();
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return this->toFloat() - other.toFloat();
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return this->toFloat() * other.toFloat();
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return this->toFloat() / other.toFloat();
}

bool Fixed::operator>(const Fixed &other) const
{
	if (this->value > other.value)
		return true;
	return false;
}

bool Fixed::operator<(const Fixed &other) const
{
	if (this->getRawBits() < other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed &other) const
{
	if (this->getRawBits() >= other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed &other) const
{
	if (this->getRawBits() <= other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator==(const Fixed &other) const
{
	if (this->getRawBits() == other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed &other) const
{
	if (this->getRawBits() != other.getRawBits())
		return true;
	return false;
}

Fixed &Fixed::operator++()
{
	this->value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed	temp = *this;
	this->value++;
	return temp;
}

Fixed &Fixed::operator--()
{
	this->value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed	temp = *this;
	this->value--;
	return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return b;
	return a;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return b;
	return a;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return b;
	return a;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return b;
	return a;
}
