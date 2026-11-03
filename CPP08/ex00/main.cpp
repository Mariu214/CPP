/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 13:15:41 by malaimo           #+#    #+#             */
/*   Updated: 2026/10/05 16:14:22 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyFind.tpp"

#include <vector>
#include <iostream>
#include <list>
#include <iterator>
#include <deque>

int	main(void)
{
	int					temp[9] = {1, 2, 3, 4, 5, 16, 8, 34, 20};
	int					n = sizeof(temp) / sizeof(temp[0]);

	
	std::vector<int>			vector(temp, temp + n);
	std::vector<int>::iterator	itv = findT(vector, 8);
	if (itv !=  vector.end())
		std::cout << distance(vector.begin(), itv) << std::endl;
	else
		std::cout << "int not found" << std::endl;


	std::list<int>				list(temp, temp + n);
	std::list<int>::iterator	itl = findT(list, 5);
	if (itl != list.end())
		std::cout << distance(list.begin(), itl) << std::endl;
	else
		std::cout << "int not found" << std::endl;


	std::deque<int>				deque(temp, temp + n);
	std::deque<int>::iterator	itd = findT(deque, 89);
	if (itd != deque.end())
		std::cout << distance(deque.begin(), itd) << std::endl;
	else
		std::cout << "int not found" << std::endl;
	return 0;
}