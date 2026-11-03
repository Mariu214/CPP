/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 13:29:27 by malaimo           #+#    #+#             */
/*   Updated: 2026/10/08 15:17:08 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	std::cout << "================ COPY MANAGEMENT ==================" << std::endl;
	size_t	size = 5;
    Array<char> numbers(size);
    char* mirror = new char[size];
    srand(time(NULL));
    for (size_t i = 0; i < size; i++)
    {
        numbers[i] = static_cast<int>(65 + i);
        mirror[i] = numbers[i];
    }
    //SCOPE
    {
		Array<char> non;
        Array<char> tmp = numbers;
        Array<char> test(tmp);
    }

    for (size_t i = 0; i < size; i++)
    {
        std::cout << numbers[i] << " " << mirror[i] << std::endl;
    }

	std::cout << "========= COPY MANAGEMENT WITH MAX VALUE ==========" << std::endl;

	Array<int> number(MAX_VAL);
    int* mirrors = new int[MAX_VAL];
    srand(time(NULL));
    for (size_t i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        number[i] = value;
        mirrors[i] = value;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirrors[i] != number[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

	std::cout << "=============== ERROR MANAGEMENT ==================" << std::endl;
    try
    {
        number[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        number[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	try
    {
        number[10] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        number[i] = rand();
    }
    delete [] mirror;
	delete [] mirrors;
    return 0;
}