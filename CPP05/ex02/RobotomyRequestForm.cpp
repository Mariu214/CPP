/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 16:13:46 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/27 17:23:12 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequest", 72, 45), _target("default")
{
	std::cout << PURPLE "RobotomyRequestForm Standard constructor called, no arguments given" RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequest", 72, 45), _target(target)
{
	std::cout << GREEN "RobotomyRequestForm standard constructor called" RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm("RobotomyRequest", 72, 45), _target(src._target)
{
	std::cout << GREEN "RobotomyRequestForm copy constructor called" RESET << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	std::cout << GREEN "Copy assignment operator called" RESET << std::endl;
	AForm::operator=(src);
	return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << PURPLE "RobotomyRequestForm destructor called" RESET << std::endl;
}

void	RobotomyRequestForm::execution() const
{
	std::cout << BLUE "bbbbbbbBBBBBBBBBBRRRRRRRRRRRRRRRRR or some other drilling noise sound" RESET << std::endl;
	if (rand() % 2)
		std::cout << CYAN << _target << " has successfully been robotomized...           YAY!!!?" RESET << std::endl;
	else
		std::cout << RED "The robotomy failed" RESET << std::endl;
}
