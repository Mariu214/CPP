/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:11:58 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/24 14:33:29 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cstdlib>
#include <string>

class Animal
{
	protected:
	std::string	_type;
	
	public:
	Animal();
	Animal(const Animal &src);
	Animal&	operator=(const Animal &other);
	virtual ~Animal();
	virtual void	makeSound() const;
	virtual	std::string	getType() const;
};



#endif