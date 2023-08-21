/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 04:04:53 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/13 04:05:12 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("Unkown")	{	
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& orig)	{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = orig;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& orig)	{
	std::cout << "WrongAnimal copy assignement operator called" << std::endl;
	if (this == &orig)
		return (*this);
	this->type = orig.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)	{
	std::cout << "WrongAnimal efault destructor called" << std::endl;
}

std::string	WrongAnimal::getType(void) const	{
	return type;
}

void	WrongAnimal::makeSound(void) const	{
	std::cout << "Unrecognizable noises" << std::endl;
}