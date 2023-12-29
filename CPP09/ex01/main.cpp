/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:23:14 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/28 18:16:41 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	std::stack <int>	stack;
	std::string			expression;

	if (argc != 2)
	{
		std::cerr << "Incorrect number of arguments." << std::endl;
		return (1);
	}
	expression = argv[1];
	
	return (0);
}