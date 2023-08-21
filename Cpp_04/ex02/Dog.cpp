/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 03:43:03 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/15 00:35:48 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"
#include "./Brain.hpp"

Dog::Dog(void)	{
	std::cout << "Dog default contructor called" << std::endl;
	type = "Dog";
	B = new Brain();
}

Dog::Dog(const Dog& orig)	{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = orig.type;
	this->B = new Brain(*(orig.B));
}

Dog& Dog::operator=(const Dog& orig)	{
	std::cout << "Dog copy assignement operator called" << std::endl;
	if (this == &orig)
		return (*this);
	this->type = orig.type;
	delete B;
	this->B = new Brain(*(orig.B));
	return (*this);
}

Dog::~Dog(void)	{
	std::cout << "Dog destructor called" << std::endl;
	delete B;
}

void	Dog::makeSound(void) const	{
	std::cout << "BARK" << std::endl;
}