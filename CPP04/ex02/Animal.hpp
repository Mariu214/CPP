/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:12:43 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/24 14:12:44 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cstdlib>

class Animal
{
	protected:
	std::string	_type;
	
	public:
	Animal();
	Animal(const Animal &src);
	Animal&	operator=(const Animal &other);
	virtual ~Animal();
	virtual void	makeSound() const = 0;
	virtual	std::string	getType() const;
};



#endif