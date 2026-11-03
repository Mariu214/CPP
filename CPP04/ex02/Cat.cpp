/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:12:51 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/24 14:12:52 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat created\n";
	this->_type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat copied\n";
	this->brain = new Brain(*src.brain);
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		std::cout << "Cat operator called\n";
		Animal::operator=(other);
		*this->brain = *other.brain;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destroyed\n";
	delete	this->brain;
}


void	Cat::makeSound() const
{
	std::cout << "Cat meow\n";
}