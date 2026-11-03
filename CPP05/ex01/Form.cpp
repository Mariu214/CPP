/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 17:19:45 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/27 17:19:47 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("default"), _isSigned(false) , _signe(150), _execute(150)
{
	std::cout << PURPLE "Form Standard constructor called, no arguments given" RESET << std::endl;
}

Form::Form(std::string name, int signe, int execute) : _name(name), _isSigned(false) , _signe(signe), _execute(execute)
{
	std::cout << GREEN "Form standard constructor called" RESET << std::endl;
	if (_signe < 1 || _execute < 1)
		throw GradeTooHighException();
	if (_signe > 150 || _execute > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &src) : _name(src._name), _isSigned(src._isSigned) , _signe(src._signe), _execute(src._execute)
{
	std::cout << GREEN "Form copy constructor called" RESET << std::endl;
}

Form &Form::operator=(const Form &src)
{
	std::cout << GREEN "Form Copy assignment operator called" RESET << std::endl;
	if (this != &src)
		_isSigned = src._isSigned;
	return(*this);
}

Form::~Form()
{
	std::cout << PURPLE "Form standard destructor called" RESET << std::endl;
}


std::string	Form::getName() const
{
	return (_name);
}

bool		Form::getIfSigned() const
{
	return (_isSigned);
}

int			Form::getSigningGrade() const
{
	return (_signe);
}

int			Form::getExecute() const
{
	return (_execute);
}

void		Form::beSigned(const Bureaucrat &request)
{
	if (_signe < request.getGrade())
		throw GradeTooLowException();
	_isSigned = true;
}

std::ostream	&operator<<(std::ostream &output, const Form &other)
{
	std::string	signature = " is not signed";
	if (other.getIfSigned())
		signature = " is signed";
	output << other.getName() << signature << ", you need to be at least grade " << other.getSigningGrade()
		<< " to sign it and grade " << other.getExecute() << " to execute it";
	return (output); 
}
