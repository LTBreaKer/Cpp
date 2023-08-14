/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 03:56:12 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/14 02:30:52 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"
#include "./WrongCat.hpp"
#include "./Dog.hpp"

void	test1(void)	{
	Cat *i = new Cat();
	std::cout << "------------------------------------------" << std::endl;
	Cat *j = new Cat(*i);
	std::cout << "------------------------------------------" << std::endl;
	
	delete i;
	j->makeSound();
	std::cout << "------------------------------------------" << std::endl;
	delete j;
}

void	test2(void)	{
	Animal*	meta[10];
	std::cout << "------------------------------------------" << std::endl;
	for(int i = 0; i < 5; i++)	{
		meta[i] = new Cat();
	}
	std::cout << "------------------------------------------" << std::endl;
	for(int i = 5; i < 10; i++)	{
		meta[i] = new Dog();
	}
	std::cout << "------------------------------------------" << std::endl;
	for(int i = 0; i < 10; i++)	{
		delete meta[i];
	}
}

void test3()
{
    Dog *jhon = new Dog;
    Dog *sara = new Dog;
    
		std::cout << "------------------------------------------" << std::endl;
    *jhon = *sara;
    delete sara;
    jhon->makeSound();
    delete jhon;
    std::cout << "------------------------------------------" << std::endl;
}

int	main(void)
{
	std::cout << "############### TEST 1 ###############" << std::endl;
	test1();
	std::cout << "############### TEST 2 ###############" << std::endl;
	test2();
	std::cout << "############### TEST 3 ###############" << std::endl;
	test3();
	system("leaks Zoo");
	return (0);
}
