/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 04:14:17 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/21 15:27:35 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./AMateria.hpp"

AMateria::AMateria(void) : type("Unkown")	{    
}

AMateria::AMateria(std::string const & type) : type(type) {
}

AMateria::AMateria(const AMateria& orig)	{
	*this = orig;
}

AMateria& AMateria::operator=(const AMateria& orig)	{
	if (this == &orig)
		return (*this);
	this-> type = orig.type;
	return (*this);
}

AMateria::~AMateria(void){
}

std::string const& AMateria::getType() const{
	return (type);
}

void AMateria::use(ICharacter& target)	{
	
	std::cout << "Can't use AMateria of type " << type << "on "
			  << target.getName() << std::endl; 
}