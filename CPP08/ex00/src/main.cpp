/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:23:14 by aselnet           #+#    #+#             */
/*   Updated: 2024/01/03 18:01:44 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"
#include "../include/easyfind.tpp"

int main()
{

	std::cout << std::endl << "-----Test 0: vector -----" << std::endl;
	{
		std::vector<int>			vect;
		std::vector<int>::iterator	it;

		vect.push_back(10);
		vect.push_back(0);
		vect.push_back(-24);
		vect.push_back(6);
		vect.push_back(24);

		try
		{
			it = easyfind(vect, -24);
			std::cout << *it << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		try
		{
			it = easyfind(vect, 23);
			std::cout << *it << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl << "-----Test 1: list-----" << std::endl;
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
	std::cout << std::endl << "-----Test 2: deque-----" << std::endl;
	{
		std::deque<int>				deque;
		std::deque<int>::iterator	it;

		deque.push_back(10);
		deque.push_back(0);
		deque.push_back(-24);
		deque.push_back(6);
		deque.push_back(24);

		try
		{
			it = easyfind(deque, -24);
			std::cout << *it << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}

		try
		{
			it = easyfind(deque, 23);
			std::cout << *it << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
    return 0;
}