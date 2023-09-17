/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:43:55 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/17 21:45:12 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int	argc, char **argv)
{
	Harl	harl;

	if (argc != 2)
	{
		std::cout << "Incorrect arguments" << std::endl;
		std::cout << "./HarlFilter <Instruction>" << std::endl;
		std::cout << std::endl << "Instruction list :" << std::endl;
		std::cout << "- DEBUG" << std::endl;
		std::cout << "- INFO" << std::endl;
		std::cout << "- WARNING" << std::endl;
		std::cout << "- ERROR" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}
