/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:40:32 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/23 13:40:33 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap	Fragtrap("Fragtrap");
	ScavTrap	Scavtrap("Scavtrap");
	// ClapTrap Claptrap("ClapTrap");

	Scavtrap.attack("Claptrap");
	Fragtrap.takeDamage(0);
	Fragtrap.beRepaired(20);
	Fragtrap.attack("ClapTrap");
	Scavtrap.guardGate();
	Scavtrap.takeDamage(80);
	Scavtrap.beRepaired(5);
	Fragtrap.highFivesGuys();
	return 0;
}