/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:51:43 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/15 19:26:09 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	public :
			Contact(void);
			~Contact(void);

			std::string	FirstName;
			std::string LastName;
			std::string Nickname;
			std::string PhoneNumber;
			std::string DarkestSecret;
};

#endif