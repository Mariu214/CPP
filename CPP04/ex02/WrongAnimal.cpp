#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){std::cout << "Wrong Animal created\n";}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "Wrong Animal copied\n";
	*this = src;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		std::cout << "Wrong Animal operator called\n";
		_type = other._type;
	}
	return (*this);
}	

WrongAnimal::~WrongAnimal(){std::cout << "Wrong Animal destroyed\n";}

void	WrongAnimal::makeSound() const
{
	std::cout << "Animal makes a really wrong sound\n";
}

std::string	WrongAnimal::getType() const
{
	return _type;
}