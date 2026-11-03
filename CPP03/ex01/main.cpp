/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:40:17 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/23 13:40:18 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
  ScavTrap Scavtrap("Scavtrap");
  ClapTrap Claptrap("ClapTrap");

  Scavtrap.attack("Claptrap");
  Claptrap.takeDamage(0);
  Claptrap.beRepaired(20);
  Claptrap.attack("ClapTrap");
  Scavtrap.guardGate();
  Scavtrap.takeDamage(80);
  Scavtrap.beRepaired(5);
  return 0;
}