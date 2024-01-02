/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:42:22 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/29 10:40:26 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	std::cout << std::endl << "-----Coplien-----" << std::endl;
	{
		Intern a;
		Intern b(a);
		Intern c;

		c = b;
		std::cout << std::endl;
	}

	std::cout << std::endl << "-----Test 0-----" << std::endl;
	{
		Bureaucrat 				Sam("Sam", 150);
		std::cout << Sam << std::endl;

		Bureaucrat 				Terry("Terry", 1);
		std::cout << Terry << std::endl;


		AForm					*Form;
		Intern					 Joel;
	
		Form = Joel.makeForm("PresidentialPardonForm", "Bob");
		if (Form)
		{
			std::cout << *Form << std::endl;
			Terry.signForm(*Form);
			Sam.executeForm(*Form);
			Terry.executeForm(*Form);
			delete Form;
		}
	}

	std::cout << std::endl << "-----Test 1-----" << std::endl;
	{
		Bureaucrat 				Sam("Sam", 150);
		std::cout << Sam << std::endl;

		Bureaucrat 				Terry("Terry", 1);
		std::cout << Terry << std::endl;


		AForm					*Form;
		Intern					 Joel;
	
		Form = Joel.makeForm("RobotomyRequestForm", "Bob");
		if (Form)
		{
			std::cout << *Form << std::endl;
			Terry.signForm(*Form);
			Sam.executeForm(*Form);
			Terry.executeForm(*Form);
			delete Form;
		}
	}

	std::cout << std::endl << "-----Test 2-----" << std::endl;
	{
		Bureaucrat 				Sam("Sam", 150);
		std::cout << Sam << std::endl;

		Bureaucrat 				Terry("Terry", 1);
		std::cout << Terry << std::endl;


		AForm					*Form;
		Intern					 Joel;
	
		Form = Joel.makeForm("ShrubberyCreationForm", "test");
		if (Form)
		{
			std::cout << *Form << std::endl;
			Terry.signForm(*Form);
			Sam.executeForm(*Form);
			Terry.executeForm(*Form);
			delete Form;
		}
	}

	std::cout << std::endl << "-----Test 3-----" << std::endl;
	{
		Bureaucrat 				Sam("Sam", 150);
		std::cout << Sam << std::endl;

		Bureaucrat 				Terry("Terry", 1);
		std::cout << Terry << std::endl;


		AForm					*Form;
		Intern					 Joel;
	
		Form = Joel.makeForm("27B-6", "Paperwork");
		if (Form)
		{
			std::cout << *Form << std::endl;
			Terry.signForm(*Form);
			Sam.executeForm(*Form);
			Terry.executeForm(*Form);
		}
	}
	return (0);
