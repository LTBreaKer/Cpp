/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:30:49 by aharrass          #+#    #+#             */
/*   Updated: 2023/06/18 15:04:08 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"

Weapon::~Weapon(void){
}

Weapon::Weapon(std::string T) : type(T){
}

std::string Weapon::getType(void) const{
	return (type);
}

void Weapon::setType(std::string T){
	type = T;
	return ;
}