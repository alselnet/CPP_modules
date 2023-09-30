/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:43:55 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/30 20:04:24 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << std::endl << "-----Coplien-----" << std::endl;
	{
		ClapTrap	j1("Jean-Steven");
		ClapTrap	j2(j1);
		ClapTrap	j3;
		j3 = j2;
	}
	std::cout  << std::endl << "-----Test 1-----" << std::endl;
	{
		ClapTrap	j1("Jean-Steven");

		j1.attack("Térébenthine");
		j1.takeDamage(10);
		j1.beRepaired(5);
	}
	std::cout << std::endl << "-----Test 2-----" << std::endl;
	{
		ClapTrap	j1("Jean-Steven");

		for (int i = 0; i < 10; i++)
			j1.beRepaired(0);
		j1.beRepaired(0);
	}
	return 0;
}
