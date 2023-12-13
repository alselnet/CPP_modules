/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:28:14 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/13 05:16:20 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("John Doe"), _grade(150)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade = grade;
	}
	catch (Bureaucrat::GradeTooHighException &gth)
	{
		this->_grade = 1;
		std::cout << gth.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &gtl)
	{
		this->_grade = 150;
		std::cout << gtl.what() << std::endl;
	}
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	*(this) = src;
	return;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	this->_grade = src._grade;
	return (*this);
}

std::string	const Bureaucrat::getName() const
{
	return (this->_name);
}
int	const	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::raiseGrade()
{
	try
	{
		if (this->_grade < 2)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade--;
	}
	catch(Bureaucrat::GradeTooHighException &gth)
	{
		std::cout << gth.what() << std::endl;
		std::cout << "Grade was not raised" << std::endl;
	}
	return ;
}

void	Bureaucrat::decreaseGrade()
{
	try
	{
		if (this->_grade > 149)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade++;
	}
	catch(Bureaucrat::GradeTooLowException &gtl)
	{
		std::cout << gtl.what() << std::endl;
		std::cout << "Grade was not decreased" << std::endl;
	}
	return ;
}

// void	Bureaucrat::executeForm(AForm const &form)
// {
// 	try
// 	{
// 		if (this->getGrade() < form.getExecReqGrade())
// 		{
// 			std::cout << this->getName() << " executed " << form.getName() << "." << std::endl;
// 			//form.execute(*this);
// 		}
// 		else
// 		{
// 			throw GradeTooLowException();
// 		}
// 	}
// 	catch(const GradeTooLowException &gtl)
// 	{
// 		std::cout << this->getName() << " couldn't execute " << form.getName() << " because : " << gtl.what() << "." << std::endl;
// 	}
	
// }


std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (o);
}