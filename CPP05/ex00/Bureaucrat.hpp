/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 13:54:46 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/27 17:15:47 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
#define	BUREAUCRAT_HPP

#include <iostream>
#include <cstdlib>
#include <exception>

# define RESET "\e[0m"
# define RED "\e[31m"
# define GREEN "\e[32m"
// # define BLUE "\e[1;36m"
// # define CYAN "\e[0;36m"
# define PURPLE "\e[0;35m"

class Bureaucrat
{
	private:
		std::string	const	_name;
		int					_grade;
		
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat &operator=(const Bureaucrat &src);
		~Bureaucrat();
		std::string	getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();

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

std::ostream	&operator<<(std::ostream &output, const Bureaucrat &other);

#endif