/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 03:24:43 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/13 04:00:23 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Animal.hpp"

Animal::Animal(void) : type("Unkown")	{	
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& orig)	{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = orig;
}

Animal&	Animal::operator=(const Animal& orig)	{
	std::cout << "Animal copy assignement operator called" << std::endl;
	if (this == &orig)
		return (*this);
	this->type = orig.type;
	return (*this);
}

Animal::~Animal(void)	{
	std::cout << "Animal efault destructor called" << std::endl;
}

std::string	Animal::getType(void) const	{
	return type;
}

void	Animal::makeSound(void) const	{
	std::cout << "Unrecognizable noises" << std::endl;
}