/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 13:54:22 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/27 17:17:53 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("default"), _isSigned(false) , _signe(150), _execute(150)
{
	std::cout << PURPLE "Form Standard constructor called, no arguments given" RESET << std::endl;
}

AForm::AForm(std::string name, int signe, int execute) : _name(name), _isSigned(false) , _signe(signe), _execute(execute)
{
	std::cout << GREEN "Form standard constructor called" RESET << std::endl;
	if (_signe < 1 || _execute < 1)
		throw GradeTooHighException();
	if (_signe > 150 || _execute > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &src) : _name(src._name), _isSigned(src._isSigned) , _signe(src._signe), _execute(src._execute)
{
	std::cout << GREEN "Form copy constructor called" RESET << std::endl;
}

AForm &AForm::operator=(const AForm &src)
{
	std::cout << GREEN "Form Copy assignment operator called" RESET << std::endl;
	if (this != &src)
		_isSigned = src._isSigned;
	return(*this);
}

AForm::~AForm()
{
	std::cout << PURPLE "Form standard destructor called" RESET << std::endl;
}


std::string	AForm::getName() const
{
	return (_name);
}

bool		AForm::getIfSigned() const
{
	return (_isSigned);
}

int			AForm::getSigningGrade() const
{
	return (_signe);
}

int			AForm::getExecute() const
{
	return (_execute);
}

void		AForm::beSigned(const Bureaucrat &request)
{
	if (_signe < request.getGrade())
		throw GradeTooLowException();
	_isSigned = true;
}

void		AForm::execute(Bureaucrat const & executor) const
{
	if (!_isSigned)
		throw FormNotSigned();
	if (_execute < executor.getGrade())
		throw GradeTooLowException();
	execution();
}

std::ostream	&operator<<(std::ostream &output, const AForm &other)
{
	std::string	signature = " is not signed";
	if (other.getIfSigned())
		signature = " is signed";
	output << other.getName() << signature << ", you need to be at least grade " << other.getSigningGrade()
		<< " to sign it and grade " << other.getExecute() << " to execute it";
	return (output); 
}
