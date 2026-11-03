/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:12:00 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/24 14:12:01 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created\n";
	std::string thought[] = {"I am Hungry", "Feed Me", "I want to play", "World domination is on the way", "What's that smell", "I want to break things", "I am sooooo sleepy"};

	for (int i = 0; i < 100; i++)
		this->ideas[i] = thought[rand() % 7];
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copied\n";
	for (int i = 0; i < 100; i++)
		ideas[i] = src.ideas[i];
}

Brain	&Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		std::cout << "Brain operator called\n";
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain(){std::cout << "Brain destroyed\n";}

std::string	Brain::get_idea()
{
	return ideas[rand() % 100];
}