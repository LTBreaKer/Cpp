/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 04:19:56 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/17 05:45:20 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)	{
	for(int i = 0; i < 4; i++)	{
		stock[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& orig)	{
	for(int i = 0; i < 4; i++)	{
		if (orig.stock[i])
			this->stock[i] = orig.stock[i]->clone();
		else
			this->stock[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& orig)	{
	if (this == & orig)
		return (*this);
	for(int i = 0; i < 4; i++)	{
		if (orig.stock[i])
			this->stock[i] = orig.stock[i]->clone();
		else
			this->stock[i] = NULL;
	}
	return (*this);
}

MateriaSource::~MateriaSource()	{
	for(int i = 0; i < 4; i++)	{
		if (stock[i])
			delete stock[i];
	}
}

void MateriaSource::learnMateria(AMateria* mat)	{
	for(int i = 0; i < 4; i++)	{
		if (!this->stock[i]){
			this->stock[i] = mat->clone();
			delete mat;
			return;
		}
			
	}
	delete mat;
}

AMateria*	MateriaSource::createMateria(std::string const & type)	{
	for(int i = 0; i < 4; i++)	{
		if (stock[i] && stock[i]->getType() == type)
			return (stock[i]->clone());
	}
	return (0);
}