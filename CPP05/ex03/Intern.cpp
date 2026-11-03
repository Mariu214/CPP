/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:11:16 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/27 17:28:02 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"

Intern::Intern()
{
	std::cout << PURPLE "Intern Standard constructor called" RESET << std::endl;
}

Intern::Intern(const Intern &src)
{
	std::cout << GREEN "Intern copy constructor called" RESET << std::endl;
	*this = src;
}

Intern &Intern::operator=(const Intern &src)
{
	std::cout << GREEN "Intern Copy assignment operator called" RESET << std::endl;
	if (this != &src)
		*this = src;
	return(*this);
}

Intern::~Intern()
{
	std::cout << PURPLE "Intern standard destructor called" RESET << std::endl;
}

AForm	*Intern::makeForm(std::string formName, std::string target) const
{
	AForm	*form;
	std::string	formList[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm	*(Intern::*formCreator[3])(std::string target) const = {&Intern::newShrubbery, &Intern::newRobotomy, &Intern::newPresidential};

	for(int i = 0; i < 3; i++)
	{
		if (formList[i] == formName)
		{
			form = (this->*formCreator[i])(target);
			std::cout << YELLOW "Intern creates " RESET << formList[i] << std::endl;
			return form;
		}
	}
	throw WrongFormNameException();
	return NULL;
}

AForm	*Intern::newShrubbery(std::string target) const
{
	ShrubberyCreationForm *form = new ShrubberyCreationForm(target);
	return form;
}

AForm	*Intern::newRobotomy(std::string target) const
{
	RobotomyRequestForm *form = new RobotomyRequestForm(target);
	return form;
}

AForm	*Intern::newPresidential(std::string target) const
{
	PresidentialPardonForm *form = new PresidentialPardonForm(target);
	return form;
}