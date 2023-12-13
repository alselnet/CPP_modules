/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 06:26:59 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/13 06:33:18 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class RobotomyRequestForm : public virtual AForm
{
	public:
			RobotomyRequestForm();
			RobotomyRequestForm(Bureaucrat const &Bureaucrat);
			RobotomyRequestForm(const RobotomyRequestForm &src);
			virtual ~RobotomyRequestForm();

			RobotomyRequestForm &operator=(const RobotomyRequestForm &src);

			void 	execute(Bureaucrat const &executor) const;

	private:
			std::string _target;

};

#endif