/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 03:58:26 by aselnet           #+#    #+#             */
/*   Updated: 2023/11/13 16:57:23 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

int	main()
{
	Zombie	*HobbitHorde;

	HobbitHorde = zombieHorde(2, "Raimi");
	if (!HobbitHorde)
		return (1);
	// int i = 0;
	// Zombie *tmp = HobbitHorde;
	// while (i < 2)
	// {
	// 	tmp->announce();
	// 	tmp++;
	// 	i++;
	// }
	delete [] HobbitHorde;
	return (0);
}
