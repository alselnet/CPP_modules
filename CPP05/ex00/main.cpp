/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:42:22 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/12 20:37:47 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << std::endl << "-----Coplien-----" << std::endl;
	{
		Bureaucrat	j1("Sam", 50);
		Bureaucrat	j2(j1);
		Bureaucrat	j3;

		j3 = j2;
	}

	std::cout << std::endl << "-----Test 0-----" << std::endl;
	{
		Bureaucrat Terry("Terry", 58);
		std::cout << Terry << std::endl;
	}

	std::cout << std::endl << "-----Test 1-----" << std::endl;
	{
		Bureaucrat Sam("Sam", -4);
		Bureaucrat Terry("Terry", 200);

		std::cout << std::endl << "Bureaucrats' grades before modifications :" << std::endl;
		std::cout << Sam << std::endl;
		std::cout << Terry << std::endl << std::endl;


		Sam.raiseGrade();
		Terry.decreaseGrade();

		std::cout << std::endl << "Bureaucrats' grades after modifications :" << std::endl;
		std::cout << Sam << std::endl;
		std::cout << Terry << std::endl;
	}
}