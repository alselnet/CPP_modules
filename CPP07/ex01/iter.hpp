/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:36:16 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/17 09:46:42 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *arr_ptr, int arr_len, void (f)(T *))
{
	int	i = 0;
	T	*ptr = arr_ptr;
	if (arr_ptr == NULL || arr_len == 0)
		return ;
	while (i < arr_len)
	{
		f (ptr);
		ptr++;
		i++;
	}
	return ;
}

template <typename T>
void	print_elem(T *elem)
{
	std::cout << *elem << std::endl;
	return ;
}

#endif