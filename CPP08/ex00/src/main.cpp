/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:23:14 by aselnet           #+#    #+#             */
/*   Updated: 2024/01/03 14:58:35 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"
#include "../include/easyfind.tpp"

int main()
{

	std::cout << std::endl << "-----Test with list -----" << std::endl;
	{
		std::list<int>				list;
		std::list<int>::iterator	it;

		list.push_back(10);
		list.push_back(0);
		list.push_back(-24);
		list.push_back(6);
		list.push_back(24);

		try
		{
			it = easyfind(list, -24);
			std::cout << *it << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		try
		{
			it = easyfind(list, 23);
			std::cout << *it << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
    return 0;
}