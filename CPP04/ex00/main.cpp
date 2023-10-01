/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aselnet <aselnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:43:55 by aselnet           #+#    #+#             */
/*   Updated: 2023/10/01 17:26:04 by aselnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << std::endl << "-----Coplien-Animal-----" << std::endl;
	{
		Animal	animal1;
		Animal	animal2(animal1);
		Animal	animal3;

		animal3 = animal2;
	}

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

	std::cout << std::endl << "-----Test 0-----" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* i = new Dog();
		const Animal* j = new Cat();

		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete i;
		delete j;
	}

	std::cout << std::endl << "-----Test 1-----" << std::endl;

	const	WrongAnimal* k = new WrongCat();
	const	WrongCat *l = new WrongCat();

	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	k->makeSound();
	l->makeSound();
	
	delete k;
	delete l;
	return (0);
}
