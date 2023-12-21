/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:12:39 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/18 16:41:31 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
typename T::iterator	easyfind(T &container, int n)
{
	typename T::iterator it;
	typename T::iterator ite;

	ite = container.end();
	for (it = container.begin(); it != ite; ++it)
	{
		if (*it == n)
			return (it);
	}
	throw NotFoundException();
}