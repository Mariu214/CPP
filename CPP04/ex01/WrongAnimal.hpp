/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:12:25 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/24 14:33:20 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <cstdlib>
#include <string>

class WrongAnimal
{
	protected:
	std::string	_type;
	
	public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &src);
	WrongAnimal&	operator=(const WrongAnimal &other);
	~WrongAnimal();
	void	makeSound() const;
	std::string	getType() const;
};



#endif