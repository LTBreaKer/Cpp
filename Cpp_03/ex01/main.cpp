/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 05:41:04 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/18 10:31:15 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

int main(void)	{
	ClapTrap	a("said");
	ScavTrap	c("test");
	ScavTrap	b(c);

	a.attack("gg");
	a.takeDamage(2);
	b.attack("ff");
	b.takeDamage(5);
	ScavTrap	f;
	f.takeDamage(90);
	f.takeDamage(5);
	f.guardGate();
}