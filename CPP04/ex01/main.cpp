/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:43:55 by aselnet           #+#    #+#             */
/*   Updated: 2023/10/01 17:26:51 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << std::endl << "-----Coplien-Dog-----" << std::endl;
	{
		Dog		dog1;
		Dog		dog2(dog1);
		Dog		dog3;

		dog3 = dog2;
	}

	std::cout << std::endl << "-----Coplien-Cat-----" << std::endl;
	{
		Cat		cat1;
		Cat		cat2(cat1);
		Cat		cat3;

		cat3 = cat2;
	}

	std::cout << std::endl << "-----Deep copy check-----" << std::endl;
	{
		Cat		cat1;
		Cat		cat2(cat1);
		Cat		cat3;
		int		i;	

		for (i = 0; i < 100; i++)
		{
			std::cout << "Idea " << i << " of cat1 is : " << cat1.getBrain()->fetchIdea(i) << std::endl;
			std::cout << "Idea " << i << " of cat2 is : " << cat2.getBrain()->fetchIdea(i) << std::endl;
			std::cout << "Idea " << i << " of cat3 is : " << cat3.getBrain()->fetchIdea(i) << std::endl;
		}
		cat3 = cat2;
		for (i = 0; i < 100; i++)
		{
			std::cout << "Idea " << i << " of cat1 is : " << cat1.getBrain()->fetchIdea(i) << std::endl;
			std::cout << "Idea " << i << " of cat2 is : " << cat2.getBrain()->fetchIdea(i) << std::endl;
			std::cout << "Idea " << i << " of cat3 is : " << cat3.getBrain()->fetchIdea(i) << std::endl;
		}
	}

	std::cout << std::endl << "-----Simple Leak check-----" << std::endl;
	{
		const Animal*	a = new Dog();
		const Animal*	b = new Cat();

		delete a;//should not create a leak
		delete b;
	}
	
	std::cout << std::endl << "-----Animal array leak check-----" << std::endl;
	{
		Animal	*Pack[10];
		int		i;

		for (i = 0; i < 10; i++)
		{
			if (i < 5)
				Pack[i] = new Dog();
			else
				Pack[i] = new Cat();
		}
		for (i = 0; i < 10; i++)
			delete Pack[i];
	}

	return (0);
}
