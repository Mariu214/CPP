/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 13:49:07 by malaimo           #+#    #+#             */
/*   Updated: 2026/10/09 11:38:00 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define	MUTANTSTACK_HPP

#include <iostream>
#include <stack>


# define RESET "\e[0m"
# define RED "\e[31m"
# define GREEN "\e[32m"
# define BLUE "\e[1;36m"
# define CYAN "\e[0;36m"
# define PURPLE "\e[0;35m"

template <typename T, typename container = std::deque<T> >
class MutantStack : public std::stack<T, container>
{	
	public :
	MutantStack(){std::cout << GREEN "Standard constructor called with no arguments" RESET << std::endl;}
	MutantStack(const MutantStack &src)
	{
		std::cout << GREEN "Copy constructor called" RESET << std::endl;
		*this = src; 
	}
	MutantStack	&operator=(const MutantStack &src)
	{
		std::cout << GREEN "Copy operator called" RESET<< std::endl;
		if (this != &src)
			std::stack<T, container>::operator=(src);
		return *this;
	}
	~MutantStack(){std::cout << GREEN "Standard destructor called" RESET << std::endl;}

	typedef typename container::iterator				iterator;
	typedef typename container::const_iterator			const_iterator;
	typedef typename container::reverse_iterator		reverse_iterator;
	typedef typename container::const_reverse_iterator	const_reverse_iterator;
	
	iterator				begin();
	iterator				end();
	const_iterator			begin() const;
	const_iterator			end() const;
	reverse_iterator		rbegin();
	reverse_iterator		rend();
	const_reverse_iterator	rbegin() const;
	const_reverse_iterator	rend() const;
	
};

#include "MutantStack.tpp"

#endif