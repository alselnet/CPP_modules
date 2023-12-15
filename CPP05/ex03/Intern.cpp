/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 08:36:58 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/15 07:15:39 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	return ;
}

Intern::Intern(const Intern &src)
{
	*(this) = src;
	return;
}

Intern::~Intern()
{
	return ;
}

Intern &Intern::operator=(const Intern &src)
{
	(void) src;
	return (*this);
}

AForm *Intern::makeForm(std::string const formName, std::string const formTarget)
{
	std::string formNames[3];
	AForm *formPtr[3];


	formNames[0] = "PresidentialPardonForm";
	formNames[1] = "RobotomyRequestForm";
	formNames[2] = "ShrubberyCreationForm";

	formPtr[0] = new PresidentialPardonForm(formTarget);
	formPtr[1] = new RobotomyRequestForm(formTarget);
	formPtr[2] = new ShrubberyCreationForm(formTarget);
	
	int	i = 0;
	while (i < 3 && formNames[i].compare(formName) != 0)
		i++;
	int j = i;
	i = 0;
	while (i < 3)
	{
		if (i != j)
			delete formPtr[i];
		i++;
	}
	if (j > 2)
	{
		std::cout << "Invalid file name." << std::endl;
		return (NULL);
	}

	std::cout << "Intern creates " << formNames[j] << "." << std::endl;
	return (formPtr[j]);
}
