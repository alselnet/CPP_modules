/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:07:26 by aselnet           #+#    #+#             */
/*   Updated: 2024/01/02 14:05:54 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

span::span() : _N(0)
{
	return ;
}

span::span(int	N) : _N(N)
{
	return ;
}

span::span(const span &src)
{
	if (this != &src)
		*(this) = src;

	return ;
}

span::~span()
{
	return ;
}


span	&span::operator=(const span &src)
{
	this->_N = src._N;
	this->_arr.assign(src._arr.begin(), src._arr.end());	

	return (*this);
}

void	span::addNumber(int a)
{
	if (this->_arr.size() < _N)
		this->_arr.push_back(a);
	else
		throw ArrayFullException();

	return ;
}

void	span::fillFromRange(std::list<int>::iterator begin, std::list<int>::iterator end)
{
	std::list<int>::iterator	it;
	unsigned int				i;

	i = 0;
	for(it=begin; it != end; it++)
		i ++;
	if (i > this->_N)
		throw ArrayFullException();
	else
	{
		this->_arr.clear();
		this->_arr.insert(this->_arr.end(), begin, end);
	}

	return ;
}

int	span::shortestSpan(void)
{
	int	span;
	std::list<int>::iterator	it;
	std::list<int>::iterator	it2;
	std::list<int> copy;

	if (this->_arr.size() < 2)
		throw NoSpanException();
	copy = this->_arr;
	copy.sort();
	it = copy.begin();
	it2 = copy.begin();
	it2++;

	int abs = *it2 - *it;
	if (abs < 0)
		abs = -abs;
	span = abs;
	while (it2 != copy.end())
	{
		it++;
		it2++;
		if (span > abs)
			span = abs;
	}

	return (span);
}

int	span::longestSpan(void)
{
	int	span;
	std::list<int> copy;

	if (this->_arr.size() < 2)
		throw NoSpanException();
	copy = this->_arr;
	copy.sort();
	span = copy.back() - copy.front();
	if (span < 0)
		span = - span;
	return (span);
}