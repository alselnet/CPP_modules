/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:42:22 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/13 06:45:32 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << std::endl << "-----Coplien-----" << std::endl;
	{
		Form	j1("Important Form", 50, 25);
		Form	j2(j1);
		Form	j3;

		j3 = j2;
		std::cout << j1 << std::endl;
		std::cout << j2 << std::endl;
		std::cout << j3 << std::endl;
	}

	std::cout << std::endl << "-----Test 0-----" << std::endl;
	{
		Form a("27B-6", 100, -50);
		std::cout << a << std::endl << std::endl;

		Form b("27B-7", 100, 200);
		std::cout << b << std::endl << std::endl;

		Form c("27B-8", -50, 100);
		std::cout << c << std::endl << std::endl;

		Form d("27B-9", 200, 100);
		std::cout << d << std::endl;
	}

	std::cout << std::endl << "-----Test 1-----" << std::endl;
	{
		Form a("27B-6", 20, 1);
		Bureaucrat Terry("Terry", 50);
		Terry.signForm(a);

		Form b("27B-7", 100, 1);
		Terry.signForm(b);
		Terry.signForm(b);
	}
	return (0);
}