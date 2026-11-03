/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:40:21 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/23 13:40:22 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap constructor called\n";
	_HP = 100;
	_Energy = 50;
	_Attack = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap named constructor called\n";
	_HP = 100;
	_Energy = 50;
	_Attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	std::cout << "ScavTrap Copy constructor called\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "Scavtrap operator called\n";
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called\n";
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gatekeeper mode.\n";
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->is_able())
	{
		_Energy -= 1;
		std::cout << "ScavTrap " << _name << " attacked " << target << " causing " << _Attack <<" points of damage, it now have " << _Energy << " Energy left\n";
	}
}