/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 15:46:59 by malaimo           #+#    #+#             */
/*   Updated: 2026/10/01 16:11:46 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include <iostream>

template <typename T> 
void swap(T &a, T &b)
{
	T	temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T> 
const T	&min(const T &a, const T &b)
{
	return (a < b) ? a : b;
}

template <typename T>
const T	&max(const T &a, const T &b)
{
	return (a > b) ? a : b;
}

#endif