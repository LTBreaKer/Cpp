/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 03:56:12 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/13 05:42:40 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"
#include "./WrongCat.hpp"
#include "./Dog.hpp"


int	main(void)
{
	{
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
	}
	{
		const WrongAnimal *Wi = new WrongCat();
		std::cout << Wi->getType() << " " << std::endl;
		Wi->makeSound(); //will output the WrongAnimal sound!
	}
	return (0);
}