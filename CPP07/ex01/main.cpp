/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:42:22 by aselnet           #+#    #+#             */
/*   Updated: 2024/01/02 13:14:35 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	std::cout << std::endl << "-----Test 0 : ints -----" << std::endl;
	{
		int	tab[] = {1, -18, 42, 1970};

		iter(tab, 4, print_elem);
	}
	std::cout << std::endl << "-----Test 1 : floats -----" << std::endl;
	{
		float	tab[] = {0.364f, -2.1f, 42.0f, 0.000000001f, 0.0f, 78.79f};

		iter(tab, 6, print_elem);
	}
	std::cout << std::endl << "-----Test 2 : strings -----" << std::endl;
	{
		std::string	tab[] = {"hey", "everyone", "this", "is", "a", "test", "tab"};

		iter(tab, 7, print_elem);
	}
	return (0);
}
