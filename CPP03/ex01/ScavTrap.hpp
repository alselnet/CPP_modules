/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:42:52 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/30 20:28:34 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
	public:
			ScavTrap();
			ScavTrap(const std::string name);
			ScavTrap(const ScavTrap &src);
			~ScavTrap();

			ScavTrap	&operator=(const ScavTrap &src);

			void		guardGate(void);
	private:
};

#endif