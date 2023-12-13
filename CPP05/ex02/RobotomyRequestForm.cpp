/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 06:28:40 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/13 08:50:23 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("unknown target")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src.getName(), src.getSignReqGrade(), src.getExecReqGrade()), _target(src._target)
{
	return;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	this->_target = src._target;
	return (*this);
}

void 	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{

	this->checkExec(executor);
	std::cout << "*** LOUD DRILLING NOISE ***" << std::endl;
	srand(time(NULL));
	if ((rand() % 2) + 1 == 2)
		std::cout << this->_target << " has been successfully robotomized." << std::endl;
	else
		std::cout << "Robotomy on " << this->_target << " failed." << std::endl;
	return ;
}