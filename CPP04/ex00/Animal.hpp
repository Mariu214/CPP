/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:11:18 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/24 14:11:19 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

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