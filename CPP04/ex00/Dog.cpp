/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:11:27 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/24 14:11:28 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog created\n";
	this->_type = "Dog";
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog copied\n";
	*this = src;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		std::cout << "Dog = himself\n";
		Animal::operator=(other);
	}
	return (*this);
}

Dog::~Dog(){std::cout << "Dog destroyed\n";}


void	Dog::makeSound() const
{
	std::cout << "Dog bark\n";
}