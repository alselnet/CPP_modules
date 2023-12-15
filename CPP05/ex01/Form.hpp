/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 02:04:20 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/15 06:55:50 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
			Form();
			Form(std::string name, int sign_req_grade, int exec_req_grade);
			Form(const Form &src);
			virtual ~Form();

			Form &operator=(const Form &src);

			std::string	const	getName() const;
			int					getSignReqGrade() const;
			int					getExecReqGrade() const;
			bool				getState() const;

			void				beSigned(Bureaucrat const &Bureaucrat);

			class GradeTooHighException : public std::exception
			{
				public :
						virtual const char* what() const throw()
						{
							return ("the grade is too high");
						}
			};

			class GradeTooLowException: public std::exception
			{
				public :
						virtual const char* what() const throw()
						{
							return ("the grade is too low");
						}
			};

			class AlreadySignedException: public std::exception
			{
				public :
						virtual const char* what() const throw()
						{
							return ("the form is already signed");
						}
			};

	private:
			std::string const	_name;
			int const			_signReqGrade;
			int const			_execReqGrade;
			bool				_state;
};

std::ostream	&operator<<(std::ostream &o, Form const &rhs);

#endif