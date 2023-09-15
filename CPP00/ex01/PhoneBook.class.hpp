/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:09:25 by aselnet           #+#    #+#             */
/*   Updated: 2023/09/15 21:13:08 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.class.hpp"

class	PhoneBook
{
	public :
			PhoneBook(void);
			~PhoneBook(void);
			int	ContactNb;
			Contact List[8];
			void	add(void);
			void	search(void) const;
};
#endif