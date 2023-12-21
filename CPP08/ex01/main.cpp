/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:23:14 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/21 19:07:00 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	std::cout << std::endl << "-----Coplien-----" << std::endl;
	{
		span	s1(15);
		std::cout << "1" << std::endl;
		span	s2(s1);
		std::cout << "2" << std::endl;
		span	s3(10);
		std::cout << "3" << std::endl;
		s3 = s2;
		std::cout << "4" << std::endl;
	}
	std::cout << std::endl << "-----Test 0 : adding elements to array one by one-----" << std::endl;
	{
		span s1(10);
		span s2(10);
		int	i = 0;

		std::cout << "adding 10 numbers to 10 elem capacity span:" << std::endl;
		try
		{
			while (i < 10)
			{
				s1.addNumber(i);
				std::cout << i << std::endl;
				i++;
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		std::cout << std::endl << "adding 11 numbers to 10 elem capacity span:" << std::endl;
		i = 0;
		try
		{
			while (i < 11)
			{
				s2.addNumber(i);
				std::cout << i << std::endl;
				i++;
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
		std::cout << std::endl << "-----Test 1 : adding elements with fill-----" << std::endl;
	{
		span s1(7);
		span s2(6);
		int	i = 0;

		int	tmp[] = {-5, 18, 89, -21, 42, 0, 210};
		std::list<int> list(std::begin(tmp), std::end(tmp));
		std::cout << "filling size 7 array with size 7 list:" << std::endl;
		try
		{
			s1.fillFromRange(list.begin(), list.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		std::cout << std::endl << "filling size 6 array with size 7 list:" << std::endl;
		i = 0;
		try
		{
			s2.fillFromRange(list.begin(), list.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	std::cout << std::endl << "-----Test 2 : shortest span / longest span-----" << std::endl;
	{
		span s1(10);
		span s2(10);
		int	i = 0;

		int	tmp[] = {-5, 18, 89, -21, 42, 0, 210};
		std::list<int> list(std::begin(tmp), std::end(tmp));
		std::cout << "shortest span:" << std::endl;
		try
		{
			s1.fillFromRange(list.begin(), list.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << s1.shortestSpan() << std::endl << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl << std::endl;
		}
		std::cout << std::endl << "longest span :" << std::endl;
		i = 0;
		try
		{
			s2.fillFromRange(list.begin(), list.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << s1.longestSpan() << std::endl << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl << std::endl;
		}
	}
	std::cout << std::endl << "-----Test 3 : trying span on size 1 array-----" << std::endl;
	{
		span s1(1);
		span s2(1);
		int	i = 0;

		std::cout << "shortest span:" << std::endl;
		try
		{
			s1.addNumber(42);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << s1.shortestSpan() << std::endl << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl << std::endl;
		}
		std::cout << std::endl << "longest span :" << std::endl;
		i = 0;
		try
		{
			s2.addNumber(42);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << s1.longestSpan() << std::endl << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl << std::endl;
		}
	}
    return (0);
}