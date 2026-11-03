/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:12:48 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/24 14:12:49 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <cstdlib>

class Brain
{
	private :
	std::string	ideas[100];

	public :
	Brain();
	Brain(const Brain &src);
	Brain&	operator=(const Brain &other);
	~Brain();
	std::string	get_idea();
};

#endif