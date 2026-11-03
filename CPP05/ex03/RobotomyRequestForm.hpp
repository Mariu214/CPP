/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 16:13:43 by malaimo           #+#    #+#             */
/*   Updated: 2026/09/27 17:26:36 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	ROBOTOMYREQUESTFORM_HPP
# define	ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

# define RESET "\e[0m"
# define RED "\e[31m"
# define GREEN "\e[32m"
 # define BLUE "\e[1;36m"
# define CYAN "\e[0;36m"
# define PURPLE "\e[0;35m"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
	private:
	const std::string	_target;
	void				execution() const;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
		~RobotomyRequestForm();
};

#endif