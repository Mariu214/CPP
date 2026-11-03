/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 16:25:21 by malaimo           #+#    #+#             */
/*   Updated: 2026/10/13 11:01:20 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP
#define	SPAN_HPP

#include <cstdlib>
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cstddef>

# define RESET "\e[0m"
# define RED "\e[31m"
# define GREEN "\e[32m"
# define BLUE "\e[1;36m"
# define CYAN "\e[0;36m"
# define PURPLE "\e[0;35m"

class Span
{
	private:
	std::vector<int>			_v;
	unsigned int				_N;

	public:
	Span();
	Span(unsigned int N);
	Span(const Span &src);
	Span	&operator=(const Span &src);
	~Span();

	class	tooManyNumbersException : public std::exception
	{
		virtual const char*	what() const throw()
		{
			return (RED "This class limit has already been reached" RESET);
		}
	};

	class	tooFewNumbersException : public std::exception
	{
		virtual const char*	what() const throw()
		{
			return (RED "Not enough numbers to compare" RESET);
		}
	};

	class	tooMuchException : public std::exception
	{
		virtual const char*	what() const throw()
		{
			return (RED "Adding this many number will excess array capacity" RESET);
		}
	};

	void	addNumber(int number);
	int		shortestSpan();
	int		longestSpan() const;

	template <typename T>
	void	addMultiple(T start, T end)
	{
		std::ptrdiff_t	distance = std::distance(start, end);
		if (static_cast<std::ptrdiff_t> (_N - _v.size()) < distance)
			throw	tooMuchException();
		_v.insert(_v.end() ,start , end);
	}
};


#endif