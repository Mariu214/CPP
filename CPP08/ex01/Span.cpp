/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 16:29:17 by malaimo           #+#    #+#             */
/*   Updated: 2026/10/13 10:48:09 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0)
{
	std::cout << GREEN "Standard constructor called with no arguments" RESET << std::endl;
}

Span::Span(unsigned int N)
{
	std::cout << GREEN "Standard constructor called" RESET<< std::endl;
	_N = N; 
	_v.reserve(N);
}

Span::Span(const Span &src)
{
	std::cout << GREEN "Copy constructor called" RESET << std::endl;
	*this = src; 
}

Span	&Span::operator=(const Span &src)
{
	std::cout << GREEN "Copy operator called" RESET<< std::endl;
	if (this != &src)
	{
		_v = src._v;
		_N = src._N;
	}
	return *this;
}

Span::~Span()
{
	std::cout << GREEN "Standard destructor called" RESET << std::endl;
}

void	Span::addNumber(int number)
{
	if (_v.size() < _N)
		_v.push_back(number);
	else
		throw tooManyNumbersException();
}


int	Span::shortestSpan()
{
	if (_v.size() < 2)
		throw tooFewNumbersException();
	std::vector<int>	temp = _v;
	std::sort(temp.begin(), temp.end());
	int					minSpan = *(temp.end() - 1) - *temp.begin(); 
	for (std::vector<int>::iterator it = temp.begin(); (it + 1) != temp.end(); it++)
		if ((*(it + 1) - *it) < minSpan)
			minSpan = *(it + 1) - *it;
	return minSpan;
}

int	Span::longestSpan() const
{
	
	if (_v.size() < 2)
		throw tooFewNumbersException();
	return (*(std::max_element(_v.begin(), _v.end())) - *(std::min_element(_v.begin(), _v.end())));
}