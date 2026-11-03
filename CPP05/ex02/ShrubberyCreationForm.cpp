/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 13:55:24 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/27 17:23:18 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137), _target("default")
{
	std::cout << PURPLE "ShrubberyCreationForm Standard constructor called, no arguments given" RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137), _target(target)
{
	std::cout << GREEN "ShrubberyCreationForm standard constructor called" RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm("Shrubbery", 145, 137), _target(src._target)
{
	std::cout << GREEN "ShrubberyCreationForm copy constructor called" RESET << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	std::cout << GREEN "Copy assignment operator called" RESET << std::endl;
	AForm::operator=(src);
	return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << PURPLE "ShrubberyCreationForm destructor called" RESET << std::endl;
}

void	ShrubberyCreationForm::execution() const
{
	std::string	file = _target + "_shrubbery";
	std::ofstream	output;

	output.open(file.c_str());
	if (output.fail())
		throw DocumentFailedToOpen();
	for (int i = 0; i < 40; i++)
		output << std::string(40 - i - 1, ' ') << std::string(i * 2 + 1, '*') << std::endl;
	for (int i = 0; i < 8; i++)
		output << std::string(33, ' ') << "||         ||" << std::endl;
	output << std::string(34, ' ') << "‾‾‾‾‾‾‾‾‾‾‾" << std::endl;
	output.close();
}
