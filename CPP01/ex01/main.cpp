/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 03:58:26 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/17 04:58:07 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

int	main()
{
	Zombie	*HobbitHorde;

	HobbitHorde = zombieHorde(5, "Raimi");
	delete [] HobbitHorde;
	return (0);
}
