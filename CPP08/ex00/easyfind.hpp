/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:36:16 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/29 16:41:29 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <list>


template <typename T>
typename T::iterator	easyfind(T &container, int n);

class NotFoundException : public std::exception
{
	public:
			virtual const char *what() const throw()
			{
				return ("integer not found");
			}

};

#endif