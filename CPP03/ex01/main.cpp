/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:43:55 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/30 20:05:33 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << std::endl << "-----Coplien-----" << std::endl;
	{
		ScavTrap	j1("Bob");
		ScavTrap	j2(j1);
		ScavTrap	j3;
		j3 = j2;
	}
	std::cout  << std::endl << "-----Test 1-----" << std::endl;
	{
		ScavTrap	j1("Jean-Steven");

		j1.attack("Térébenthine");
		j1.takeDamage(100);
		j1.beRepaired(5);
	}
	std::cout << std::endl << "-----Test 2-----" << std::endl;
	{
		ScavTrap	j1("Jean-Steven");

		for (int i = 0; i < 50; i++)
			j1.beRepaired(0);
		j1.beRepaired(0);
	}
	std::cout << std::endl << "-----Test 3-----" << std::endl;
	{
		ScavTrap	j1("Jean-Steven");

		j1.guardGate();
	}
	return 0;
}
