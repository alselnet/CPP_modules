/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:56:54 by aselnet           #+#    #+#             */
/*   Updated: 2024/01/04 18:03:38 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

bool	isUint(char	*arg)
{
	int	i = -1;

	if (!*arg)
		return (false);
	while (arg[++i])
	{
		if (arg[i] == '+')
		{
			if (i || !arg[i + 1])
				return (false);
		}
		else if (arg[i] < '0' || arg[i] > '9')
			return (false);
	}
	return (true);
}

void	printVect(std::vector<unsigned int> &vect, std::string time)
{
	std::vector<unsigned int>::iterator it;

	std::cout << time;
	for (it = vect.begin(); it != vect.end(); it++)
		std::cout << *it << " ";
	
	return ;
}

void	insertion_sort_vect(std::vector<unsigned int> &vect, int start, int end)
{
	for(int i = start; i < end; i++)
	{
		unsigned int tmp = vect[i + 1];
		int j = i + 1;
		while (j > start && vect[j - 1] > tmp)
		{
			vect[j] = vect [j - 1];
			j--;
		}
		vect[j] = tmp;
	}
	return ;
}

void	merge_vect(std::vector<unsigned int> &vect, int start, int middle, int end)
{
	int	sizeLeft = middle - start + 1;
	int	sizeRight = end - middle;
	int	leftIndex = 0;
	int	rightIndex = 0;
	std::vector<unsigned int> left(sizeLeft);
	std::vector<unsigned int> right(sizeRight);

	for (int i = 0; i < sizeLeft; i++)
		left[i] = vect[start + i];
	for (int i = 0; i < sizeRight; i++)
		right[i] = vect[middle + i + 1];

	while (leftIndex < sizeLeft && rightIndex < sizeRight)
	{
		if (left[leftIndex] < right[rightIndex])
		{
			vect[start] = left[leftIndex];
			leftIndex++;
		}
		else
		{
			vect[start] = right[rightIndex];
			rightIndex++;
		}
		start++;
	}

	while (leftIndex < sizeLeft || rightIndex < sizeRight)
	{
		if (leftIndex < sizeLeft)
		{
			vect[start] = left[leftIndex];
			leftIndex++;
		}
		else
		{
			vect[start] = right[rightIndex];
			rightIndex++;
		}
		start++;
	}
	return ;
}

void	merge_sort_vect(std::vector<unsigned int> &vect, int start, int end)
{
	if (end - start > K)
	{
		int	middle = (start + end) / 2;
		merge_sort_vect(vect, start, middle);
		merge_sort_vect(vect, middle + 1, end);
		merge_vect(vect, start, middle, end);
	}
	else
	{
		insertion_sort_vect(vect, start, end);
	}
}

void	vector_sorting(char **argv)
{
	std::vector<unsigned int> vect;
	int	i = 0;

	while (argv[++i])
		vect.push_back(atoi(argv[i]));

	printVect(vect, "Before: ");
	clock_t	start_vect = clock();
	merge_sort_vect(vect, 0, vect.size() - 1);
	clock_t end_vect = clock();
	std::cout << std::endl << std::endl;
	printVect(vect, "After: ");
	double time_vect = 1000000.0 * (end_vect - start_vect) / CLOCKS_PER_SEC;
	std::cout << std::endl << "Time to process a range of " << vect.size() << " elements with std::vector : " << time_vect << "us" << std::endl;
	return ;
}

void	printList(std::list<unsigned int> &list, std::string time)
{
	std::list<unsigned int>::iterator it;

	std::cout << time;
	for (it = list.begin(); it != list.end(); it++)
		std::cout << *it << " ";
	
	return ;
}

void	insertion_sort_list(std::list<unsigned int>::iterator start, std::list<unsigned int>::iterator end)
{
	std::list<unsigned int>::iterator it_next;

	std::list<unsigned int>::iterator next = start;
	next++;
	for(it_next = next; it_next != end; it_next++)
	{
		unsigned int tmp = *it_next;
		std::list<unsigned int>::iterator it = it_next;
		std::list<unsigned int>::iterator prev = it;
		prev--;
		while (it != start && *prev > tmp)
		{
			*it = *prev;
			--it;
		}
		*it = tmp;
	}
	return ;
}

void	merge_list(std::list<unsigned int>::iterator start, std::list<unsigned int>::iterator middle, std::list<unsigned int>::iterator end)
{
	std::list<unsigned int>	tmpList;
	std::list<unsigned int>::iterator itLeft = start;
	std::list<unsigned int>::iterator itRight = middle;


	while (itLeft != middle && itRight != end)
	{
		if (*itLeft < *itRight)
		{
			tmpList.push_back(*itLeft);
			itLeft++;
		}
		else
		{
			tmpList.push_back(*itRight);
			itRight++;
		}
	}

	while (itLeft != middle || itRight != end)
	{
		if (itLeft != middle)
		{
			tmpList.push_back(*itLeft);
			itLeft++;
		}
		else
		{
			tmpList.push_back(*itRight);
			itRight++;
		}
	}

	std::list<unsigned int>::iterator it = tmpList.begin();
	while (it != tmpList.end())
	{
		*start = *it;
		start++;
		it ++;
	}

	return ;
}

void	merge_sort_list(std::list<unsigned int> &list, std::list<unsigned int>::iterator start, std::list<unsigned int>::iterator end)
{
	int	i = 0;
	std::list<unsigned int>::iterator it;
	std::list<unsigned int>::iterator middle = start;

	for (it = start; it != end; it++)
		i++;

	if (i > K)
	{
		for (int j = 0; j < i / 2; j++)
			middle++;
		merge_sort_list(list, start, middle);
		merge_sort_list(list, middle, end);
		merge_list(start, middle, end);
	}
	else
	{
		insertion_sort_list(start, end);
	}
}

void	list_sorting(char **argv)
{
	std::list<unsigned int> list;
	int	i = 0;
	while (argv[++i])
		list.push_back(atoi(argv[i]));

	//printList(list, "Before: ");
	clock_t	start_list = clock();
	merge_sort_list(list, list.begin(), list.end());
	clock_t end_list = clock();
	//std::cout << std::endl << std::endl;
	//printList(list, "After: ");
	double time_list = 1000000.0 * (end_list - start_list) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << list.size() << " elements with std::list : " << time_list << "us" << std::endl;
	return ;
}