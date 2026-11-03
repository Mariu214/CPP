/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 13:54:59 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/27 17:18:04 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	FORM_HPP
# define	FORM_HPP

#include <iostream>
#include <cstdlib>
#include <exception>

# define RESET "\e[0m"
# define RED "\e[31m"
# define GREEN "\e[32m"
// # define BLUE "\e[1;36m"
// # define CYAN "\e[0;36m"
# define PURPLE "\e[0;35m"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signe;
		const int			_execute;

	public:
		Form();
		Form(std::string name, int signe, int execute);
		Form(const Form &src);
		Form &operator=(const Form &src);
		~Form();
		std::string	getName()	const;
		bool		getIfSigned()	const;
		int			getSigningGrade()	const;
		int			getExecute()	const;
		void		beSigned(const Bureaucrat &request);

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
};

std::ostream	&operator<<(std::ostream &output, const Form &other);

#endif