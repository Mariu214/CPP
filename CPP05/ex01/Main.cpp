/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 13:51:33 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/25 13:50:35 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "--- Test 1 : A great Form ---" << std::endl;
	try 
    {
		Form	cafDemand("cafDemand", 50, 20);
		 std::cout << cafDemand << std::endl;
    }
    catch (std::exception &e) 
    {
        std::cout << "Error : " << e.what() << std::endl;
    }
	
	std::cout << "\n--- Test 2 : A bad Form ---" << std::endl;
	try 
    {
		Form	onlineSurvey("cafDemand", 168, -2);
		std::cout << onlineSurvey << std::endl;
    }
    catch (std::exception &e) 
    {
        std::cout << "Error : " << e.what() << std::endl;
    }
	
    std::cout << "\n--- Test 3 : George like to donate ---" << std::endl;
    try 
    {
        Bureaucrat	george("george", 34);
		std::cout << george << std::endl;
		Form		donation("donation", 50, 30);
		std::cout << donation << std::endl;
		george.signForm(donation);
    }
    catch (std::exception &e) 
    {
        std::cout << "Error : " << e.what() << std::endl;
    }

    std::cout << "\n--- Test 4 : Feldspar don't know how to do taxes ---" << std::endl;
    try 
    {
        Bureaucrat	feldspar("feldspar", 140);
		std::cout << feldspar << std::endl; 
		Form		taxes("taxes", 5, 1);
        std::cout << taxes << std::endl; 
		feldspar.signForm(taxes);
    }
    catch (std::exception &e) 
    {
        std::cout << "Error : " << e.what() << std::endl;
    }
    return 0;
}

