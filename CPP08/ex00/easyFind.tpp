/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaimo <malaimo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 13:16:20 by malaimo           #+#    #+#             */
/*   Updated: 2026/10/06 14:10:58 by malaimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
#define	EASYFIND_TPP


template <typename T>
typename T::iterator	findT(T &container, int	target)
{
	typename T::iterator	it;

	for (it = container.begin(); it != container.end(); it++)
		if (*it == target)
			return	it;
	return container.end();
}


#endif