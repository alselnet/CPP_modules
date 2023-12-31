/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 06:26:59 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/29 10:35:08 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class RobotomyRequestForm : public virtual AForm
{
	public:
			RobotomyRequestForm();
			RobotomyRequestForm(std::string const target);
			RobotomyRequestForm(const RobotomyRequestForm &src);
			virtual ~RobotomyRequestForm();

			RobotomyRequestForm &operator=(const RobotomyRequestForm &src);

			void 	execute(Bureaucrat const &executor) const;

	private:
			std::string _target;

};

#endif