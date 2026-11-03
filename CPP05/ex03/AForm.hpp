/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 13:55:12 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/27 17:18:04 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	AFORM_HPP
# define	AFORM_HPP

#include <iostream>
#include <cstdlib>
#include <exception>
#include <fstream>
#include <string>
#include <ctime>

# define RESET "\e[0m"
# define RED "\e[31m"
# define GREEN "\e[32m"
// # define BLUE "\e[1;36m"
// # define CYAN "\e[0;36m"
# define PURPLE "\e[0;35m"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signe;
		const int			_execute;
		virtual void		execution() const = 0;
		
	public:
		AForm();
		AForm(std::string name, int signe, int execute);
		AForm(const AForm &src);
		AForm &operator=(const AForm &src);
		virtual ~AForm();
		std::string	getName()	const;
		bool		getIfSigned()	const;
		int			getSigningGrade()	const;
		int			getExecute()	const;
		void		beSigned(const Bureaucrat &request);
		void		execute(Bureaucrat const & executor) const;

		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return (RED "Grade is too high !" RESET);
			}
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return (RED "Grade is too low !" RESET);
			}
		};
		class FormNotSigned : public std::exception
		{
			virtual const char* what() const throw()
			{
				return (RED "The form is not signed" RESET);
			}
		};
};

std::ostream	&operator<<(std::ostream &output, const AForm &other);

#endif