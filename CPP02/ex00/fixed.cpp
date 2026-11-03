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

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
	{
		value = other.getRawBits();
	}
	return *this;
}

Fixed::~Fixed(){std::cout << "Destructor called\n";}

int	Fixed::getRawBits(void) const 
{
	std::cout << "GetRawBits member function called\n";
	return value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "SetRawBits member function called\n";
	value = raw;
}



