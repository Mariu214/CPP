/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:52:16 by malaimo           #+#    #+#             */
/*   Updated: 2026/10/01 12:51:46 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		return std::cout << RED "Wrong number of arguments" RESET << std::endl, 1;
	}
	ScalarConverter::convert(av[1]);
	return 0;
}