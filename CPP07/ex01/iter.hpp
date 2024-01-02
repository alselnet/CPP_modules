/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:36:16 by aselnet           #+#    #+#             */
/*   Updated: 2024/01/02 13:12:54 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *arr_ptr, int arr_len, void (&f)(T const &))
{
	int	i;
	if (arr_len < 0)
	{
		std::cerr << "wrong size" << std::endl;
		return ;
	}
	i = -1;
	while (++i < arr_len)
		f(arr_ptr[i]);

	return ;
}

template <typename T>
void	print_elem(T const &elem)
{
	std::cout << elem << std::endl;
	return ;
}

#endif