/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 04:08:57 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/13 04:09:14 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongCat.hpp"

WrongCat::WrongCat(void)	{
	std::cout << "WrongCat default contructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& orig)	{
	std::cout << "WrongCat copy contructor called" << std::endl;
	*this = orig;
}

WrongCat& WrongCat::operator=(const WrongCat& orig)	{
	std::cout << "WrongCat copy assignement operator called" << std::endl;
	if(this == &orig)
		return (*this);
	this->type = orig.type;
	return (*this);
}

WrongCat::~WrongCat(void)	{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const	{
	std::cout << "Meao" << std::endl;
}