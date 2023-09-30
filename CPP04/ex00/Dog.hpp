/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:25:28 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/30 22:44:01 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
			Dog();
			Dog(const Dog &src);
			~Dog();

			Dog	&operator=(const Dog &src);

			void makeSound(void) const;

	private:

};

#endif