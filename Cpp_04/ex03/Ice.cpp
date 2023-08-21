/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 03:06:07 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/21 15:28:31 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Ice.hpp"

Ice::Ice(void)	{
	type = "ice";
}

Ice::Ice(const Ice& orig) : AMateria()	{
	*this = orig;
}

Ice& Ice::operator=(const Ice& orig)	{
	if (this == &orig)
		return (*this);
	this->type = orig.type;
	return (*this);
}

Ice::~Ice(void)	{
}

AMateria* Ice::clone() const	{
	return (new Ice);
}

void	Ice::use(ICharacter& target)	{
	std::cout << "* shoots an ice bolt at " << target.getName()
			  << " *" << std::endl;
}