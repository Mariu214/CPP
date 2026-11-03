#ifndef	WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <cstdlib>

class WrongAnimal
{
	protected:
	std::string	_type;
	
	public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &src);
	WrongAnimal&	operator=(const WrongAnimal &other);
	~WrongAnimal();
	void	makeSound() const;
	std::string	getType() const;
};



#endif