/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:12:04 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/24 14:33:27 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <cstdlib>
#include <string>

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