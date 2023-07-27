/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:45:19 by aharrass          #+#    #+#             */
/*   Updated: 2023/07/17 23:45:46 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanB.hpp"

HumanB::HumanB(std::string name): _name(name){
	_Weapon = NULL;
}

HumanB::HumanB(std::string name, Weapon W): _name(name){
	_Weapon = &W;
}

HumanB::~HumanB(void){
}

void	HumanB::attack(void) const	{
	if (_Weapon){
		std::cout << _name << " attacks with their " << _Weapon->getType() << std::endl;
	}
	else
		std::cout << _name << " has no weapon" << std::endl;
	return;
}

void	HumanB::setWeapon(Weapon &W){
	_Weapon = &W;
}
