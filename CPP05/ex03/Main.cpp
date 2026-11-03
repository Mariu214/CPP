/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 13:51:33 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/27 17:10:54 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	srand(time(0));
	Intern	someRandomIntern;
	AForm*	scf = NULL;
	AForm*	rrf = NULL;
	AForm*	ppf = NULL;
	AForm*	test = NULL;
    try 
    {
		
		scf = someRandomIntern.makeForm("shrubbery creation", "jsp");
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		ppf = someRandomIntern.makeForm("presidential pardon", "nicolas");
		// test = someRandomIntern.makeForm("presidential perdon", "nicolas");
        Bureaucrat	george("george", 10);
		std::cout << *scf << std::endl;
		std::cout << *rrf << std::endl;
		std::cout << *ppf << std::endl;
		// george.signAForm(*scf);
		george.signAForm(*rrf);
		george.signAForm(*ppf);
		std::cout << *scf << std::endl;
		std::cout << *rrf << std::endl;
		std::cout << *ppf << std::endl;
		george.executeForm(*scf);
		george.executeForm(*rrf);
		george.executeForm(*ppf);
    }
    catch (std::exception &e) 
    {
        std::cout << "Error : " << e.what() << std::endl;
    }
	delete	scf;
	delete 	rrf;
	delete	ppf;
	delete	test;
    return 0;
}

