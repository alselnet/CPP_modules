/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:41:13 by aselnet           #+#    #+#             */
/*   Updated: 2023/10/01 16:27:25 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string	genIdea(int maxLength)
{
    const std::string	characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int 			charactersLength = characters.length();
    std::string			idea;
	int					randomIndex;
	int					length;

	length = rand() % maxLength;
	if (length == 0)
		length++;
    for (int i = 0; i < length; i++) 
	{
        randomIndex = rand() % charactersLength;
        idea += characters[randomIndex];
    }
    return (idea);
}

Brain::Brain()
{
	int	i;
	std::cout << "Brain default constructor called." << std::endl;
	for (i = 0; i < 100; i++)
		this->_ideas[i] = genIdea(10);
	return ;
}

Brain::Brain(const Brain &src)
{
	int	i;

	std::cout << "Brain copy constructor called." << std::endl;
	for (i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	return ;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
	return ;
}

Brain	&Brain::operator=(const Brain &src)
{
	int	i;

	std::cout << "Brain assignment operator called." << std::endl;
	if (this != &src)
	{
		for (i = 0; i < 100; i++)
			this->_ideas[i] = src._ideas[i];
	}
	return (*this);
}

std::string Brain::fetchIdea(int index)
{
	return (this->_ideas[index]);
}
