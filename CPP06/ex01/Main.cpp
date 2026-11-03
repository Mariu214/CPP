/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:52:16 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/30 16:25:07 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data	test;
	Data 	*ptr;
	
	test.value = 5;
	std::cout << &test << std::endl;
	ptr = Serializer::deserialize(Serializer::serialize(&test));
	std::cout << ptr->value << std::endl;
	std::cout << ptr << std::endl;
	return 0;
}
