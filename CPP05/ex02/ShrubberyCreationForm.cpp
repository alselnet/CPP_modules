/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 06:50:58 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/29 10:24:27 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("unknown target")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src.getName(), src.getSignReqGrade(), src.getExecReqGrade()), _target(src._target)
{
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	this->_target = src._target;
	return (*this);
}

void 	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{

	this->checkExec(executor);
	std::string file = this->_target + "_shrubbery";
	std::ofstream output(file.c_str());

    if (output.is_open()) 
	{
        output << "  ^    ^   ^   ^   ^      ^   ^   ^   ^     ^   ^ " << std::endl;
        output << " /I\\  /I\\ /I\\ /I\\ /I\\    /I\\ /I\\ /I\\ /I\\   /I\\ /I\\ " << std::endl;
        output << " /I\\  /I\\ /I\\ /I\\ /I\\    /I\\ /I\\ /I\\ /I\\   /I\\ /I\\ " << std::endl;
        output << " /I\\  /I\\ /I\\ /I\\ /I\\    /I\\ /I\\ /I\\ /I\\   /I\\ /I\\ " << std::endl;
        output.close();
    } 
	else 
	{
        std::cout << "Error creating file '" << file << "'." << std::endl;
    }
	return ;
}