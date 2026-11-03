/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:12:18 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/24 15:30:07 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\n========== MASS TEST ==========\n";

	const int size = 10;
	Animal *animals[size];

	for (int i = 0; i < size / 2; i++)
		animals[i] = new Dog();

	for (int i = size / 2; i < size; i++)
		animals[i] = new Cat();

	for (int i = 0; i < size; i++)
		animals[i]->makeSound();

	std::cout << std::endl;

	for (int i = 0; i < size; i++)
		delete animals[i];

	std::cout << "\n========== THOUGHT TEST ==========\n";

	Cat catA;

	for (int i = 0; i < 10; i++) 
		catA.show_thought();
}

