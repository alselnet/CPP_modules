/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 05:02:12 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/17 05:06:56 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*string_ptr;
	std::string	&string_ref = string;

	string_ptr = &string;
	
	std::cout << &string << std::endl;
	std::cout << string_ptr << std::endl;
	std::cout << &string_ref << std::endl << std::endl;

	std::cout << string << std::endl;
	std::cout << *string_ptr << std::endl;
	std::cout << string_ref << std::endl;
	return (0);
}
