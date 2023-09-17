/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 03:51:03 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/17 04:20:13 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);

	private:
		std::string	_name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif