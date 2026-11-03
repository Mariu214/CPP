/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:11:55 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/24 14:11:56 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){std::cout << "Animal created\n";}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copied\n";
	*this = src;
}

Animal	&Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		std::cout << "Animal operator called\n";
		_type = other._type;
	}
	return (*this);
}	

Animal::~Animal(){std::cout << "Animal destroyed\n";}

void	Animal::makeSound() const
{
	std::cout << "Animal make sound\n";
}

std::string	Animal::getType() const
{
	return _type;
}