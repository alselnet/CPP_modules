/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:23:14 by aselnet           #+#    #+#             */
/*   Updated: 2024/01/04 18:03:33 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		std::cout << "error: incorrect number of arguments." << std::endl;
		return (-1);
	}

	int	i = 0;
	while (argv[++i])
	{
		if (isUint(argv[i]) == false)
		{
			std::cout << "error : invalid argument : " << argv[i] << std::endl;
			return (-1);
		}
	}
	
	vector_sorting(argv);
	list_sorting(argv);
	return (0);
}