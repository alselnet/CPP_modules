/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 06:49:33 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/29 10:20:51 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class ShrubberyCreationForm : public virtual AForm
{
	public:
			ShrubberyCreationForm(const std::string target);
			ShrubberyCreationForm(const ShrubberyCreationForm &src);
			virtual ~ShrubberyCreationForm();

			ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);

			void 	execute(Bureaucrat const &executor) const;

	private:
			ShrubberyCreationForm();
			std::string _target;

};

#endif