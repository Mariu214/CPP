/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:03:56 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/27 17:27:54 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	INTERN_HPP
#define	INTERN_HPP

#include <iostream>
#include <cstdlib>
#include <exception>

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

# define RESET "\e[0m"
# define RED "\e[31m"
# define GREEN "\e[32m"
// # define BLUE "\e[1;36m"
// # define CYAN "\e[0;36m"
# define PURPLE "\e[0;35m"
# define YELLOW "\e[93m"

class AForm;

class Intern
{
	private:
		
	public:
		Intern();
		Intern(std::string name, int grade);
		Intern(const Intern &src);
		Intern &operator=(const Intern &src);
		~Intern();

		AForm	*makeForm(std::string formName, std::string target) const;
		AForm	*newShrubbery(std::string target) const;
		AForm	*newRobotomy(std::string target) const;
		AForm	*newPresidential(std::string target) const;

		class WrongFormNameException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return (RED "This form does not exist" RESET);
			}
		};
};

#endif