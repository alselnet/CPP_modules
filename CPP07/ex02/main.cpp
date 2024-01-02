/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:23:14 by aselnet           #+#    #+#             */
/*   Updated: 2024/01/02 13:39:46 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_VAL 750
int main(int, char**)
{
	//empty array
	Array<int> empty;

	try
	{
		std::cout << empty[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	//comparison test
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "numbers and copy didn't store the same value" << std::endl;
            return 1;
        }
    }
    delete [] mirror;

	//Copy Test
	Array<int> tmp = numbers;
	Array<int> test(tmp);

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (numbers[i] != test[i] ||  numbers[i] != tmp[i])
        {
            std::cerr << "numbers test and tmp did not store the same value" << std::endl;
            return (1);
        }
    }

	//accessor test
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
	for (int i = 0; i < 10; i++)
    {
        std::cout << numbers[i] << std::endl;
    }

	//wrong indexes
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}