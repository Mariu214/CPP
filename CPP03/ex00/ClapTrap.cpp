/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:40:05 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/23 13:56:16 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _HP(10), _Energy(10), _Attack(0)
{
	std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _HP(10), _Energy(10), _Attack(0)
{
	std::cout << "Default named constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "Copy constructor called\n";
	*this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_HP = other._HP;
		_Energy = other._Energy;
		_Attack = other._Attack;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called\n";
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->is_able())
	{
		_Energy -= 1;
		std::cout << "ClapTrap " << _name << " attacked " << target << " causing " << _Attack <<" points of damage, it now have " << _Energy << " Energy left\n";
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_HP <= 0)
	{
		std::cout << "Stop! it's already dead\n";
		return ;
	}
	if (amount >= _HP)
		_HP = 0;
	else 
		_HP -= amount;
	std::cout << "ClapTrap " << _name << " took " << amount << " damages, it's now at " << _HP << " HP\n"; 
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->is_able())
	{
		_Energy -= 1;
		_HP += amount;
		std::cout << "ClapTrap " << _name << " repaired " << amount << " damages, it now have " << _HP << " HP and " << _Energy << " Energy left\n";
	}
}

bool	ClapTrap::is_able()
{
	if (_HP <= 0)
	{
		std::cout << "ClapTrap " << _name << " is damaged beyond usage\n";
		return false;
	}
	if (_Energy < 1)
	{
		std::cout << "ClapTrap " << _name << " don't have any energy left\n";
		return false;
	}
	return true;
}
