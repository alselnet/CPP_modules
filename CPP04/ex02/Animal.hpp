/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:10:03 by aselnet           #+#    #+#             */
/*   Updated: 2023/10/01 17:20:49 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
	public:
			Animal();
			Animal(const Animal &src);
			virtual ~Animal();

			Animal	&operator=(const Animal &src);

			virtual void 	makeSound(void) const = 0;
			std::string		getType(void)	const;
			Brain			*getBrain(void) const;

	protected:
			std::string	type;
			Brain		*brain;

};

#endif