/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:11:14 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/24 14:11:15 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat created\n";
	this->_type = "Cat";
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat copied\n";
	*this = src;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		std::cout << "Cat operator called\n";
		Animal::operator=(other);
	}
	return (*this);
}

Cat::~Cat(){std::cout << "Cat destroyed\n";}


void	Cat::makeSound() const
{
	std::cout << "Cat meow\n";
}