/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:10:49 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/17 19:11:39 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	main(int argc, char **argv)
{
	std::string	replace;
	std::string	buffer;

	if (argc != 4)
	{
		std::cout << "Incorrect arguments" << std::endl;
		std::cout << "./sed <filename> string1 string2" << std::endl;
		return (1);
	}
	sed			sed(argv[1], argv[2], argv[3]);
	if (!sed.GetIfs())
	{
		std::cout << "Failed to open file <" << argv[1] << "> " << std::endl;
		return (1);
	}
	sed.OfsWrite();
	return (0);
}
