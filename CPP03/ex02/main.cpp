/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:43:55 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/30 20:19:18 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	std::cout << std::endl << "-----Coplien-----" << std::endl;
	{
		FragTrap	j1("Jean-Steven");
		FragTrap	j2(j1);
		FragTrap	j3;

		j3 = j2;
	}
	std::cout << std::endl << "-----Test 0-----" << std::endl;
	{
		FragTrap	j1("Jean-Steven");

		j1.attack("Térébenthine");
		j1.takeDamage(95);
		j1.beRepaired(5);
		j1.takeDamage(5);
	}
	std::cout << std::endl << "-----Test 1-----" << std::endl;
	{
		FragTrap	j1("Jean-Steven");

		j1.attack("Térébenthine");
		j1.takeDamage(95);
		j1.beRepaired(5);
		j1.takeDamage(10);
		j1.beRepaired(5);
	}
	std::cout << std::endl << "-----Test 2-----" << std::endl;
	{
		FragTrap	j1("Jean-Steven");

		j1.attack("Térébenthine");
		j1.takeDamage(100);
		j1.beRepaired(5);
	}
	std::cout << std::endl << "-----Test 3-----" << std::endl;
	{
		FragTrap	j1("Jean-Steven");

		for (int i = 0; i < 100; i++)
			j1.beRepaired(0);
		j1.beRepaired(0);
	}
	std::cout << std::endl << "-----Test 4-----" << std::endl;
	{
		FragTrap	j1("Jean-Steven");

		j1.highFivesGuys();
	}
	return 0;
}
