/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 16:24:06 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/27 17:23:04 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardon", 25, 5), _target("default")
{
	std::cout << PURPLE "PresidentialPardonForm Standard constructor called, no arguments given" RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardon", 25, 5), _target(target)
{
	std::cout << GREEN "PresidentialPardonForm standard constructor called" RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm("PresidentialPardon", 25, 5), _target(src._target)
{
	std::cout << GREEN "PresidentialPardonForm copy constructor called" RESET << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	std::cout << GREEN "Copy assignment operator called" RESET << std::endl;
	AForm::operator=(src);
	return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << PURPLE "PresidentialPardonForm destructor called" RESET << std::endl;
}

void	PresidentialPardonForm::execution() const
{
	std::cout << GREEN << _target << " has been pardoned by Zaphod Beeblebrox." RESET << std::endl;
}
