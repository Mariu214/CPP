#include "fixed.hpp"

Fixed::Fixed()
{
	value = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called\n";
	*this = src;
}

Fixed::Fixed(const int number)
{
	std::cout << "Int constructor called\n";
	value = number << bits;
}

Fixed::Fixed(const float number)
{
	std::cout << "Float constructor called\n";
	value = roundf(number * (1 << bits));
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
	{
		value = other.value;
	}
	return *this;
}

Fixed::~Fixed(){std::cout << "Destructor called\n";}

int	Fixed::getRawBits(void) const 
{
	std::cout << "getRawBits member function called\n";
	return value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "getRawBits member function called\n";
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


//========= END OF CLASS ==========

std::ostream &operator<<(std::ostream &output, const Fixed &other)
{
	return output << other.toFloat();
}