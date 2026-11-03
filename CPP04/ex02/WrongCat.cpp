#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "Wrong Cat created\n";
	this->_type = "Wrong Cat";
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
	std::cout << "Wrong Cat copied\n";
	*this = src;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		std::cout << "Wrong Cat operator called\n";
		WrongAnimal::operator=(other);
	}
	return (*this);
}

WrongCat::~WrongCat(){std::cout << "Wrong Cat destroyed\n";}


void	WrongCat::makeSound() const
{
	std::cout << "moew\n";
}