/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:10:03 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/30 22:40:35 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
			WrongAnimal();
			WrongAnimal(const WrongAnimal &src);
			virtual	~WrongAnimal();

			WrongAnimal	&operator=(const WrongAnimal &src);

			void 			makeSound(void) const;
			std::string		getType(void)	const;

	protected:
			std::string	type;
};




#endif