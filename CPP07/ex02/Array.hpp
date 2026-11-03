/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 13:29:34 by malaimo           #+#    #+#             */
/*   Updated: 2026/10/08 15:16:56 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define	ARRAY_HPP

#include <cstdlib>
#include <iostream>

# define RESET "\e[0m"
# define RED "\e[31m"
# define GREEN "\e[32m"
# define BLUE "\e[1;36m"
# define CYAN "\e[0;36m"
# define PURPLE "\e[0;35m"

template <typename T>
class Array
{
	private :
	T		*_array;
	size_t	_size;

	public :
	Array()
	{
		std::cout << GREEN "standard constructor called with no value" RESET << std::endl;
		_array = NULL;
		_size = 0;
	}
	
	Array(unsigned int n)
	{
		std::cout << GREEN "standard constructor called" RESET << std::endl;
		_array = new T[n];
		_size = n;
	}

	Array(const Array &src)
	{
		std::cout << GREEN "copy constructor called" RESET << std::endl;
		_array = NULL;
		*this = src;
	}
	
	~Array()
	{
		std::cout << GREEN "destructor called" RESET << std::endl;
		delete	[]_array;
	}
	Array	&operator=(const Array &src)
	{
		if (this != &src)
		{
			delete []_array;
			_size = src._size;
			if (_size > 0)
			{
				_array = new T[_size];
				for (size_t i = 0; i < _size; i++)
					_array[i] = src._array[i];
			}
			else
				_array = NULL;
		}
		return *this;
	}

	class outOfBoundException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return (RED "Index out of bound !" RESET);
		}
	};
	
	T	&operator[](size_t index)
	{
		if (index >= _size)
			throw outOfBoundException();
		return _array[index];
	}

	const	T	&operator[](size_t index) const 
	{
		if (index >= _size)
			throw outOfBoundException();
		return _array[index];
	}
	
	size_t	size() const
	{
		return _size;
	}
};


#endif