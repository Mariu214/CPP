/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 13:51:33 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/27 16:46:45 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	srand(time(0));	
    try 
    {
        Bureaucrat	george("george", 10);
		std::cout << george << std::endl;
		ShrubberyCreationForm		Shrubbery("home");
		RobotomyRequestForm			Robotomy("Marc");
		PresidentialPardonForm		President("Mark");
		std::cout << Shrubbery << std::endl;
		std::cout << Robotomy << std::endl;
		std::cout << President << std::endl;
		// george.signAForm(Shrubbery);
		george.signAForm(Robotomy);
		george.signAForm(President);
		george.executeForm(Shrubbery);
		george.executeForm(Robotomy);
		george.executeForm(President);
    }
    catch (std::exception &e) 
    {
        std::cout << "Error : " << e.what() << std::endl;
    }
    return 0;
}

