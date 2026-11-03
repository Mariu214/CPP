/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:12:13 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/24 15:21:24 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog created\n";
	this->_type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog copied\n";
	this->brain = new Brain(*src.brain);
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		std::cout << "Dog operator called\n";
		Animal::operator=(other);
		*this->brain = *other.brain;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destroyed\n";
	delete	this->brain;
}


void	Dog::makeSound() const
{
	std::cout << "Dog bark\n";
}

void	Dog::show_thought() const
{
	std::cout << this->brain->get_idea() << std::endl;
}