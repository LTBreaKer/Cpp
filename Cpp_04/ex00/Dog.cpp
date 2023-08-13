/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 03:43:03 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/13 04:10:29 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog(void)	{
	std::cout << "Dog default contructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& orig)	{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = orig;
}

Dog& Dog::operator=(const Dog& orig)	{
	std::cout << "Dog copy assignement operator called" << std::endl;
	if (this == &orig)
		return (*this);
	this->type = orig.type;
	return (*this);
}

Dog::~Dog(void)	{
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const	{
	std::cout << "BARK" << std::endl;
}