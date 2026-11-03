/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:12:10 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/24 14:40:09 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
	Brain	*brain;

	public:
	Cat();
	Cat(const Cat &src);
	Cat& operator=(const Cat &other);
	~Cat();
	void	makeSound() const;
	void	show_thought() const;
};

#endif