/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:12:16 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/24 15:12:13 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
	private:
	Brain	*brain;

	public:
	Dog();
	Dog(const Dog &src);
	Dog& operator=(const Dog &other);
	~Dog();
	void	makeSound() const;
	void	show_thought() const;
};

#endif