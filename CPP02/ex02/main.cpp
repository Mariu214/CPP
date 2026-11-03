#include "fixed.hpp"

std::ostream &operator<<(std::ostream &output, const Fixed &other)
{
	return output << other.toFloat();
}

int main( void ) 
{
	Fixed a(12);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << b << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a / b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << (a != b) << std::endl;
	std::cout << (a == b) << std::endl;
	std::cout << (a <= b) << std::endl;
	return 0;
}