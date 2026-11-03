/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 16:24:30 by malaimo           #+#    #+#             */
/*   Updated: 2026/10/13 11:03:17 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T, typename container>
	typename MutantStack<T, container>::iterator MutantStack<T, container>::begin()
	{
		return this->c.begin();
	}

template <typename T, typename container>
	typename MutantStack<T, container>::iterator MutantStack<T, container>::end()
	{
		return this->c.end();
	}

template <typename T, typename container>
	typename MutantStack<T, container>::const_iterator	MutantStack<T, container>::begin() const
	{
		return this->c.begin();
	}

template <typename T, typename container>
	typename MutantStack<T, container>::const_iterator	MutantStack<T, container>::end() const
	{
		return this->c.end();
	}

template <typename T, typename container>
	typename MutantStack<T, container>::reverse_iterator	MutantStack<T, container>::rbegin()
	{
		return this->c.rbegin();
	}

template <typename T, typename container>
	typename MutantStack<T, container>::reverse_iterator	MutantStack<T, container>::rend()
	{
		return this->c.rend();
	}

template <typename T, typename container>
	typename MutantStack<T, container>::const_reverse_iterator	MutantStack<T, container>::rbegin() const
	{
		return this->c.rbegin();
	}

template <typename T, typename container>
	typename MutantStack<T, container>::const_reverse_iterator	MutantStack<T, container>::rend() const
	{
		return this->c.rend();
	}