/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 03:51:38 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/14 02:30:49 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"
#include "./Brain.hpp"

Cat::Cat(void)	{
	std::cout << "Cat default contructor called" << std::endl;
	type = "Cat";
	B = new Brain();
}

Cat::Cat(const Cat& orig)	{
	std::cout << "Cat copy contructor called" << std::endl;
	this->type = orig.type;
	this->B = new Brain(*(orig.B));
}

Cat& Cat::operator=(const Cat& orig)	{
	std::cout << "Cat copy assignement operator called" << std::endl;
	if(this == &orig)
		return (*this);
	this->type = orig.type;
	delete B;
	this->B = new Brain(*(orig.B));
	return (*this);
}

Cat::~Cat(void)	{
	std::cout << "Cat destructor called" << std::endl;
	delete B;
}

void	Cat::makeSound(void) const	{
	std::cout << "MEAO" << std::endl;
}