/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:36:16 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/15 11:44:28 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <cmath>


class Base
{
	public:

		virtual ~Base(void);

};

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);
#endif