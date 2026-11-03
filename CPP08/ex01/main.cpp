/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:26:49 by malaimo           #+#    #+#             */
/*   Updated: 2026/10/08 13:36:34 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "============== basic test ===============" << std::endl;
	try
	{	
		Span sp = Span(5);
		std::cout << "jsp" << std::endl;
		sp.addNumber(13);
		sp.addNumber(3);
		sp.addNumber(80);
		sp.addNumber(70);
		sp.addNumber(34);
	
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "error : " << e.what() << std::endl;
	}
	std::cout << "========== test add multiples ===========" << std::endl;
	try
	{
		std::vector<int>	test;

		test.assign(10, 9);
		Span spb = Span(100);
		spb.addMultiple(test.begin(), test.end());

		std::cout << spb.shortestSpan() << std::endl;
		std::cout << spb.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "error : " << e.what() << std::endl;
	}
	std::cout << "============= test errors ===============" << std::endl;
	try
	{
		std::vector<int>	test;

		test.assign(10, 9);
		Span spc = Span(5);
		spc.addMultiple(test.begin(), test.end());


		std::cout << spc.shortestSpan() << std::endl;
		std::cout << spc.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "error : " << e.what() << std::endl;
	}
	return 0;
}