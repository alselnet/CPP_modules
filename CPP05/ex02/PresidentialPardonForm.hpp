/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 04:17:56 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/13 04:18:48 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm : public virtual AForm
{
	public:
			PresidentialPardonForm();
			PresidentialPardonForm(Bureaucrat const &Bureaucrat);
			PresidentialPardonForm(const PresidentialPardonForm &src);
			virtual ~PresidentialPardonForm();

			PresidentialPardonForm &operator=(const PresidentialPardonForm &src);

			void 	execute(Bureaucrat const &executor) const;

	private:
			std::string _target;

};

#endif