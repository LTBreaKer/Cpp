/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 03:49:01 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/17 06:15:53 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Unkown")	{
	for(int i = 0; i < 4; i++)	{
		inventory[i] = NULL;
	}
}

Character::Character(std::string name) : _name(name)	{
	for(int i = 0; i < 4; i++)	{
		inventory[i] = NULL;
	}
}

Character::Character(const Character& orig)	{
	this->_name = orig._name;
	for (int i = 0; i < 4; i++)	{
		if (orig.inventory[i])
			this->inventory[i] = orig.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
}

Character& Character::operator=(const Character& orig)	{
	if (this == &orig)
		return (*this);
	this->_name = orig._name;
	for (int i = 0; i < 4; i++)	{
		if (orig.inventory[i])
			this->inventory[i] = orig.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	return (*this);
}

Character::~Character(void)	{
	for(int i = 0; i < 4; i++)	{
		if (inventory[i])
			delete inventory[i];
	}
}

std::string const& Character::getName() const	{
	return (_name);
}

void Character::equip(AMateria* m)	{
	if (!m)
		return;
	for (int i = 0; i < 4; i++)	{
		if (!inventory[i]){
			inventory[i] = m->clone();
			return ;
		}	
	}
}

void	Character::unequip(int idx)	{
	if (idx < 4 && inventory[idx])
		inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)	{
	if ( idx < 4 && inventory[idx])
		inventory[idx]->use(target);
}
