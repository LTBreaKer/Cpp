/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 03:18:58 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/21 15:28:39 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cure.hpp"

Cure::Cure(void)	{
	type = "cure";
}

Cure::Cure(const Cure& orig) : AMateria()	{
	*this = orig;
}

Cure& Cure::operator=(const Cure& orig)	{
	if (this == &orig)
		return (*this);
	this->type = orig.type;
	return (*this);
}

Cure::~Cure(void)	{
}

AMateria* Cure::clone() const	{
	AMateria* modern = new Cure(*this);
	return (modern);
}

void	Cure::use(ICharacter& target)	{
	
	std::cout << "* heals " << target.getName() << "'s wounds *" 
			  << std::endl;
}