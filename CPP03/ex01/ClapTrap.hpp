/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:58:43 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/30 20:28:10 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
			ClapTrap();
			ClapTrap(const std::string name);
			ClapTrap(const ClapTrap &src);
			~ClapTrap();

			ClapTrap	&operator=(const ClapTrap &src);

			void		attack(const std::string &target);
			void		takeDamage(unsigned int amount);
			void		beRepaired(unsigned int amount);

	protected:
			std::string	_name;
			int			_Hp;
			int			_Energy;
			int			_Ad;
};

#endif