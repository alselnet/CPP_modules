/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 04:25:01 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/13 05:09:50 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("unknown target")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(Bureaucrat const &Bureaucrat) : AForm("PresidentialPardonForm", 25, 5), _target(Bureaucrat.getName())
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src.getName(), src.getSignReqGrade(), src.getExecReqGrade()), _target(src._target)
{
	return;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	this->_target = src._target;
	return (*this);
}

void 	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (executor.getGrade() > this->getExecReqGrade())
			throw GradeTooLowException();
		else
			std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	catch(const GradeTooLowException &gtl)
	{
		std::cout << gtl.what() << std::endl;
	}
	
	return ;
}
