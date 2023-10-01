/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:19:35 by aselnet           #+#    #+#             */
/*   Updated: 2023/10/01 15:46:35 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
			Cat();
			Cat(const Cat &src);
			virtual	~Cat();

			Cat	&operator=(const Cat &src);

			void makeSound(void) const;

	private:

};

#endif