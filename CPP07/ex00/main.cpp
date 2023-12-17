/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:42:22 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/17 09:27:11 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	std::cout << std::endl << "-----Test 0 : ints -----" << std::endl;
	{
		int a = 2;
		int b = 3;

		std::cout << "before the swap :"<< std::endl;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		swap( a, b );
		std::cout << "after the swap :"<< std::endl;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;	
	}

	std::cout << std::endl << "-----Test 1 : floats-----" << std::endl;
	{
		float a = -2.98f;
		float b = 3.14f;

		std::cout << "before the swap :"<< std::endl;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		swap( a, b );
		std::cout << "after the swap :"<< std::endl;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	}

	std::cout << std::endl << "-----Test 2 : strings-----" << std::endl;
	{
		std::string a = "this is a test string";
		std::string b = "this is a second test string";

		std::cout << "before the swap :"<< std::endl;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		swap( a, b );
		std::cout << "after the swap :"<< std::endl;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;	
	}

	return (0);
}