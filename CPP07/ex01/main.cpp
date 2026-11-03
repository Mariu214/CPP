/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 16:29:44 by malaimo           #+#    #+#             */
/*   Updated: 2026/10/02 13:26:41 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void	add(int	&a)
{
	a++;
}

void	show(const char a)
{
	std::cout << RED << a << RESET;
}

void	showString(const std::string &a)
{
	std::cout << PURPLE << a << RESET;
}

int	main(void)
{
	int	a[3] = {1 , 2, 3};

	::iter(a, sizeof(a) / sizeof(a[0]), add);
	for (int i = 0; i < 3; i++)
		std::cout << GREEN << a[i] << RESET;
	std::cout << std::endl << std::endl;
	//============================================
	
	const char	b[5] = {'a', 'b', 'c', 'd', 'e'};
	::iter(b, sizeof(b) / sizeof(b[0]), show);
	std::cout << std::endl << std::endl;
	//============================================

	std::string	c[5] = {"abc", "def", "ghi", "jkl", "mnop"};
	::iter(c, sizeof(c) / sizeof(c[0]), showString);
	std::cout << std::endl << std::endl;
	return 0;	
}