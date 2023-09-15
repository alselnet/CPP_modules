/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:51:17 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/15 21:13:49 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int	main()
{
	PhoneBook	MyAwesomePhoneBook;
	std::string	Input;

	while (Input.compare("EXIT") != 0)
	{
		std::cout << "Please input a command : ";
		std::cin >> Input;

		if (Input.compare("ADD") == 0)
			MyAwesomePhoneBook.add();
		else if (Input.compare("SEARCH") == 0)
			MyAwesomePhoneBook.search();
	}
	return (0);
}