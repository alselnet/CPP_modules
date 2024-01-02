/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:36:16 by aselnet           #+#    #+#             */
/*   Updated: 2024/01/02 14:26:10 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <list>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class span
{
	public:
			span(int	N);
			span(const span &src);
			virtual ~span();

			span	&operator=(const span &src);

			void	addNumber(int a);
			void	fillFromRange(std::list<int>::iterator begin, std::list<int>::iterator end);
			int		shortestSpan(void);
			int		longestSpan(void);

			class ArrayFullException : public std::exception
			{
				public:
						virtual const char *what() const throw()
						{
							return ("operation aborted: array at max capacity");
						}
			};
			
			class NoSpanException : public std::exception
			{
				public:
						virtual const char *what() const throw()
						{
							return ("operation aborted: array too small for span calculation");
						}
			};
	private:
			span();
			unsigned long		_N;
			std::list<int>		_arr;
};

#endif