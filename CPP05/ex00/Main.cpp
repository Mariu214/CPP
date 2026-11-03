/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 13:51:33 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/11 15:34:52 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "--- Test 1 : A great Bureaucrat ---" << std::endl;
    try 
    {
        Bureaucrat george("george", 34);
        std::cout << george << std::endl;
    }
    catch (std::exception &e) 
    {
        std::cout << "Error : " << e.what() << std::endl;
    }

    std::cout << "\n--- Test 2 : A bad Bureaucrat ---" << std::endl;
    try 
    {
        Bureaucrat feldspar("feldspar", 155); 
        std::cout << feldspar << std::endl; 
    }
    catch (std::exception &e) 
    {
        std::cout << "Error : " << e.what() << std::endl;
    }
	
    std::cout << "\n--- Test 3 : Grade get too high ---" << std::endl;
	try 
    {
        Bureaucrat henry("henry", 3);
        std::cout << henry << std::endl;
		henry.incrementGrade();
		henry.incrementGrade();
		std::cout << henry << std::endl;
		henry.incrementGrade();
		std::cout << henry << std::endl;
		
    }
    catch (std::exception &e) 
    {
        std::cout << "Error : " << e.what() << std::endl;
    }
	
	std::cout << "\n--- Test 4 : Grade get too Low ---" << std::endl;
	try 
    {
        Bureaucrat poe("poe", 148);
        std::cout << poe << std::endl;
		poe.decrementGrade();
		poe.decrementGrade();
		std::cout << poe << std::endl;
		poe.decrementGrade();
		std::cout << poe << std::endl;
    }
    catch (std::exception &e) 
    {
        std::cout << "Error : " << e.what() << std::endl;
    }
    return 0;
}

