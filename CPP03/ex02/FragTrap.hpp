/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:07:12 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/30 20:28:55 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
	public:
			FragTrap();
			FragTrap(const std::string name);
			FragTrap(const FragTrap &src);
			~FragTrap();

			FragTrap	&operator=(const FragTrap &src);

			void		highFivesGuys(void);
	private:

};

#endif