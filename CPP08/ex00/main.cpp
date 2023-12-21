/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:23:14 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/18 16:22:59 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include "easyfind.tpp"

int main()
{

	std::cout << std::endl << "-----Test 0 : list -----" << std::endl;
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

	std::cout << std::endl << "-----Test 1 : array -----" << std::endl;
	{
		std::array<int, 10>				arr;
		std::array<int, 10>::iterator	it;

		arr[0] = 10;
		arr[1] = 0;
		arr[2] = 23;
		arr[3] = 6;
		arr[4] = 25;

		try
		{
			it = easyfind(arr, 23);
			std::cout << *it << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		try
		{
			it = easyfind(arr, -24);
			std::cout << *it << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
    return 0;
}