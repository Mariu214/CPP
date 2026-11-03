/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 16:14:39 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/27 17:26:43 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	SHRUBBERYCREATIONFORM_HPP
# define	SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

# define RESET "\e[0m"
# define RED "\e[31m"
# define GREEN "\e[32m"
// # define BLUE "\e[1;36m"
// # define CYAN "\e[0;36m"
# define PURPLE "\e[0;35m"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
	private:
	const std::string	_target;
	void				execution() const;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
		~ShrubberyCreationForm();

		class DocumentFailedToOpen : public std::exception
		{
			virtual const char* what() const throw()
			{
				return (RED "Document failed to open !" RESET);
			}
		};
};
#endif