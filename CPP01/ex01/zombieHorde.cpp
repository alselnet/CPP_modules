/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 04:35:54 by aselnet           #+#    #+#             */
/*   Updated: 2023/11/13 16:53:43 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int	i	=  -1;
	Zombie	*zombieHorde;
	
	if (N < 1)
		return (0);
	zombieHorde = new Zombie[N];
	while (++i < N)
		zombieHorde[i].setName(name);
	return (zombieHorde);
}
