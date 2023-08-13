/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 03:51:38 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/13 05:42:37 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat(void)	{
	std::cout << "Cat default contructor called" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& orig)	{
	std::cout << "Cat copy contructor called" << std::endl;
	*this = orig;
}

Cat& Cat::operator=(const Cat& orig)	{
	std::cout << "Cat copy assignement operator called" << std::endl;
	if(this == &orig)
		return (*this);
	this->type = orig.type;
	return (*this);
}

Cat::~Cat(void)	{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const	{
	std::cout << "MEAO" << std::endl;
}