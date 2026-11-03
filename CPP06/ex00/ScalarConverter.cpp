/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:50:52 by malaimo           #+#    #+#             */
/*   Updated: 2026/10/01 14:25:25 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
	*this = src;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &src)
{
	(void)src;
	return *this;
}

ScalarConverter::~ScalarConverter(){}

//============================================================================================================================

enum Types{CHAR, MATH, INVALID};

static void		PrintFloat(double result)
{
	if ((result < -std::numeric_limits<float>::max() || result > std::numeric_limits<float>::max())
				&& !std::isnan(result) && std::isfinite(result))
		std::cout << "float: impossible"  << std::endl;
	else
		std::cout << "float: " << static_cast<float>(result) << "f" << std::endl;
}

static void		PrintInt(double result)
{
	if (result < INT_MIN || result > INT_MAX || std::isnan(result))
		std::cout << "int: impossible"  << std::endl;
	else
		std::cout << "int: " << static_cast<int>(result) << std::endl;
}

static void		PrintChar(double result)
{
	if (result < 0 || result >= 128 || std::isnan(result))
		std::cout << "char: impossible" << std::endl;
	else if (result >= 32 && result <= 126)
		std::cout << "char: " << static_cast<char>(result) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

static	void	PrintImpossible()
{
	std::cout << "char: impossible"  << std::endl;
	std::cout << "int: impossible"  << std::endl;
	std::cout << "float: impossible"  << std::endl;
	std::cout << "double: impossible"  << std::endl;
}

void	ScalarConverter::convert(std::string src)
{
	char *	limiter;
	double	result = strtod(src.c_str(), &limiter);
	
	if (src.length() == 1 && *limiter != 0)
		result  = src[0];
	else if (*limiter != 0 && (*limiter  != 'f' || *(limiter + 1) != '\0'))
		return PrintImpossible();
	std::cout << std::fixed;
	std::cout << std::setprecision(1);
	PrintChar(result);
	PrintInt(result);
	PrintFloat(result);
	std::cout << "double: " << static_cast<double>(result) << std::endl;
}