/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:40:32 by malaimo           #+#    #+#             */
/*   Updated: 2026/10/01 14:29:49 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	int	randomiser = rand() % 3;
	switch(randomiser)
	{
		case 0:
		{
			A *child = new A();
			std::cout << "A created" << std::endl;
			return dynamic_cast<Base *>(child);
		}
		case 1:
		{
			B *child = new B();
			std::cout << "B created" << std::endl;
			return dynamic_cast<Base *>(child);
		}
		case 2:
		{
			C *child = new C();
			std::cout << "C created" << std::endl;
			return dynamic_cast<Base *>(child);
		}
	}
	return NULL;
}
void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << CYAN "Type is A" RESET << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << GREEN "Type is B" RESET << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << PURPLE "Type is C" RESET << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << CYAN "Type is A" RESET << std::endl;
	}
	catch (std::exception &e){}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << GREEN "Type is B" RESET << std::endl;
	}
	catch (std::exception &e){}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << PURPLE "Type is C" RESET << std::endl;
	}
	catch (std::exception &e){}
}

int	main(void)
{
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		Base *ptr = generate();
		identify(ptr);
		identify(*ptr);
		delete	ptr;
	}
	return 0;
}