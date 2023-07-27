/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 05:41:04 by aharrass          #+#    #+#             */
/*   Updated: 2023/07/26 15:56:19 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

int main(void)	{
	ClapTrap a;
	ScavTrap b;

	b.attack("ff");
	b.takeDamage(5);
	ScavTrap f(b);
	f.takeDamage(5);
	f.takeDamage(5);
	f.guardGate();
}