/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:21:20 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/15 06:57:07 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public:
			Bureaucrat();
			Bureaucrat(std::string name, int grade);
			Bureaucrat(const Bureaucrat &src);
			virtual ~Bureaucrat();

			Bureaucrat &operator=(const Bureaucrat &src);

			std::string	const	getName() const;
			int					getGrade() const;

			void				raiseGrade();
			void				decreaseGrade();

			void				signForm(AForm &form);

			void				executeForm(AForm const &form);

			class GradeTooHighException : public std::exception
			{
				public :
						virtual const char* what() const throw()
						{
							return ("Grade too high");
						}
			};

			class GradeTooLowException: public std::exception
			{
				public :
						virtual const char* what() const throw()
						{
							return ("Grade too low");
						}
			};

	private:
			const std::string	_name;
			unsigned int		_grade;

};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif