/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:39:30 by aharrass          #+#    #+#             */
/*   Updated: 2023/06/18 15:26:45 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &W): _name(name), _Weapon(W){
}

HumanA::~HumanA(void){
}

void	HumanA::attack(void) const	{
	std::cout << _name << " attacks with their " << _Weapon.getType() << std::endl;
	return ;
}
