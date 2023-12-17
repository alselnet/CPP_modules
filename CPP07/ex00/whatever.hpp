/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:36:16 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/17 09:22:22 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T	tmp;
	tmp = a;
	a = b;
	b = tmp;

	return ;
}

template <typename T>
T const	min(T const &a, T const &b)
{
	if (a < b)
		return (a);

	return (b);
}

template <typename T>
T const	max(T const &a, T const &b)
{
	if (a > b)
		return (a);

	return (b);
}

#endif