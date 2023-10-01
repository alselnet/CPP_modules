/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:41:14 by aselnet           #+#    #+#             */
/*   Updated: 2023/10/01 16:26:53 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public:
			Brain();
			Brain(const Brain &src);
			virtual	~Brain();

			Brain	&operator=(const Brain &src);

			std::string fetchIdea(int index);
	private:
			std::string	_ideas[100];
};

std::string	genIdea(int maxLength);

#endif