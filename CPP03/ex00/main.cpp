/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:40:10 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/23 13:40:11 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
  ClapTrap Claptrap("ClapTrap");
  ClapTrap Jack("Jack");

  Claptrap.attack("Jack");
  Jack.takeDamage(0);
  Jack.beRepaired(20);
  Jack.attack("ClapTrap");
  Claptrap.takeDamage(100);
  Claptrap.beRepaired(5);
  return 0;
}