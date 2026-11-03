/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 13:54:34 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/27 17:17:53 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
	std::cout << PURPLE "Standard constructor called, no arguments given" RESET << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << GREEN "standard constructor called" RESET << std::endl;
	if (_grade < 1)
		throw GradeTooHighException();
	if (_grade > 150)
		throw GradeTooLowException();
	
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src.getName()), _grade(src.getGrade())
{
	std::cout << GREEN "copy constructor called" RESET << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	std::cout << GREEN "Copy assignment operator called" RESET << std::endl;
	if (this != &src)
		_grade = src._grade;
	return(*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << PURPLE "standard destructor called" RESET << std::endl;
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int			Bureaucrat::getGrade() const
{
	return (_grade);
}

void		Bureaucrat::incrementGrade()
{
	if ((_grade - 1) < 1)
		throw GradeTooHighException();
	_grade--;
}

void		Bureaucrat::decrementGrade()
{
	if ((_grade + 1) > 150)
		throw GradeTooLowException();
	_grade++;
}

void		Bureaucrat::signAForm(AForm &AForm)
{
	try 
	{
		AForm.beSigned(*this);
		std::cout << YELLOW << _name << " signed " << AForm.getName() << RESET << std::endl;	
	}
	catch(std::exception &e)
	{
		std::cout << _name << " couldn't sign Form " << AForm.getName() << " because " <<  e.what() << std::endl;
	}
}

void		Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << _name << " couldn't execute Form " << form.getName() << " because " <<  e.what() << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &output, const Bureaucrat &other)
{
	output << other.getName() << ", bureaucrat grade " << other.getGrade();
	return (output); 
}
