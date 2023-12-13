/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:42:22 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/13 04:57:26 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	std::cout << std::endl << "-----Coplien-----" << std::endl;
	{
		std::cout << std::endl;
	}

	std::cout << std::endl << "-----Test 0-----" << std::endl;
	{
		Bureaucrat 				Sam("Sam", 150);
		std::cout << Sam << std::endl;

		Bureaucrat 				Terry("Terry", 1);
		std::cout << Terry << std::endl;

		PresidentialPardonForm 	ppf(Sam);
		std::cout << std::endl << ppf << std::endl;

		AForm					*Form;
		Form = &ppf;
		std::cout << *Form << std::endl;

		Form->execute(Sam);
	}

	return (0);
}