/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:10:03 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/30 22:44:11 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
			Animal();
			Animal(const Animal &src);
			~Animal();

			Animal	&operator=(const Animal &src);

			virtual void 	makeSound(void) const;
			std::string		getType(void)	const;

	protected:
			std::string	type;
};

#endif