/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 02:04:18 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/13 04:08:03 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("Unnamed Form"), _signReqGrade(150), _execReqGrade(150), _state(false)
{
	return ;
}

AForm::AForm(std::string name, int sign_req_grade, int exec_req_grade) : _name(name), _signReqGrade(sign_req_grade), _execReqGrade(exec_req_grade), _state(false)
{
	try
	{
		if (sign_req_grade < 1 || exec_req_grade < 1)
			throw AForm::GradeTooHighException();
		else if (sign_req_grade > 150 || exec_req_grade > 150)
			throw AForm::GradeTooLowException();
	}
	catch (AForm::GradeTooHighException &gth)
	{
		std::cout << gth.what() << std::endl;
	}
	catch (AForm::GradeTooLowException &gtl)
	{
		std::cout << gtl.what() << std::endl;
	}
	return ;
}

AForm::AForm(const AForm &src) : _name(src._name), _signReqGrade(src._signReqGrade), _execReqGrade(src._execReqGrade), _state(false)
{
	return;
}

AForm::~AForm()
{
	return ;
}

AForm &AForm::operator=(const AForm &src)
{
	this->_state = src._state;
	return (*this);
}

std::string	const AForm::getName() const
{
	return (this->_name);
}

int	const	AForm::getSignReqGrade() const
{
	return (this->_signReqGrade);
}

int	const AForm::getExecReqGrade() const
{
	return (this->_execReqGrade);
}

bool	AForm::getState() const
{
	return (this->_state);
}

void	AForm::beSigned(Bureaucrat const &Bureaucrat)
{

	if (Bureaucrat.getGrade() <= this->_signReqGrade)
	{
		this->_state = true;
	}
	else
		throw GradeTooLowException();
	return ;
}

void	AForm::signForm(Bureaucrat const &Bureaucrat)
{
	try
	{
		beSigned(Bureaucrat);
		std::cout << Bureaucrat.getName() << " signed " << this->getName() << "." << std::endl;
	}
	catch(const AForm::GradeTooLowException &gtl)
	{
		std::cout << Bureaucrat.getName() << " couldn't sign " << this->_name << " because : " << gtl.what() << "." << std::endl;
	}
	
}

std::ostream	&operator<<(std::ostream &o, AForm const &rhs)
{
	o << "Form name : " << rhs.getName() << std::endl;
	o << "Grade required to sign : " << rhs.getSignReqGrade() << std::endl;
	o << "Grade required to execute : " << rhs.getExecReqGrade() << std::endl;
	if (rhs.getState() == true)
		o << "Form status : signed." << std::endl;
	else
		o << "Form status : not yet signed." << std::endl;
	return (o);
}