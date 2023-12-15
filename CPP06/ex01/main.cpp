/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:42:22 by aselnet           #+#    #+#             */
/*   Updated: 2023/12/15 11:10:03 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data		Data1;
	Data		*ptr;
	uintptr_t	uintptr;

	Data1.str = "this is a testing string.\n";
	ptr = &Data1;
	uintptr = 0;
	std::cout << "ptr points to data structure 'Data1', containing a string." << std::endl;
	std::cout << "here is the adress stored in ptr: " << ptr << std::endl;
	std::cout << "here is the string inside Data: " << ptr->str;
	std::cout << "uintptr is an unsigned int initialized at: " << uintptr << std::endl << std::endl;

	uintptr = Serializer::serialize(ptr);
	std::cout << "After serialization, the adress of Data is serialized to an unsigned int and stored in uintptr." << std::endl;
	std::cout << "Here is what the unsigned int form of the adress looks like : " << uintptr << std::endl;
	std::cout << "We will reinitialize the pointer to Data to prove the adress isnt lost." << std::endl;
	ptr = 0;
	std::cout << "Here is what is stored in ptr : " << ptr << std::endl << std::endl;

	std::cout << "We will now deserialize the adress back into ptr." << std::endl;
	ptr = Serializer::deserialize(uintptr);
	std::cout << "ptr now contains the adress: " << ptr << std::endl;
	std::cout << "here is the output of ptr->str: " << ptr->str << std::endl;

	return (0);
}