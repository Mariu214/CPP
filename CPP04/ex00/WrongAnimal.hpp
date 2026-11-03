/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:11:39 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/24 14:14:18 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

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