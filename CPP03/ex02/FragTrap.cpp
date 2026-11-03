/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:40:29 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/23 13:40:30 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap constructor called\n";
	_HP = 100;
	_Energy = 100;
	_Attack = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap named constructor called\n";
	_HP = 100;
	_Energy = 100;
	_Attack = 30;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	std::cout << "FragTrap Copy constructor called\n";
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap operator called\n";
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called\n";
}

void	FragTrap::highFivesGuys()
{
	std::cout << "HIGH FIVE GUYS !?\n";
}

void	FragTrap::attack(const std::string& target)
{
	if (this->is_able())
	{
		_Energy -= 1;
		std::cout << "FragTrap " << _name << " attacked " << target << " causing " << _Attack <<" points of damage, it now have " << _Energy << " Energy left\n";
	}
}