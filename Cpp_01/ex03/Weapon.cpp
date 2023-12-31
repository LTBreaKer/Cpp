/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:30:49 by aharrass          #+#    #+#             */
/*   Updated: 2023/07/17 23:42:56 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"

Weapon::~Weapon(void){
}

Weapon::Weapon(std::string T) : type(T){
}

const std::string& Weapon::getType(void) const{
	return (type);
}

void Weapon::setType(std::string T){
	type = T;
	return ;
}