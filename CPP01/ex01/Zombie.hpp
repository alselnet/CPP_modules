/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 03:51:03 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/17 04:44:23 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie(void);
		void	setName(std::string name);
		void	announce(void);

	private:
		std::string	_name;
};

Zombie* zombieHorde(int N, std::string name);

#endif