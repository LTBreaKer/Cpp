/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 05:41:04 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/07 21:33:01 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"

int main(void)	{
	ClapTrap	a("said");
	ScavTrap	b("hamid");
	FragTrap	c("khalid");

	b.attack("ff");
	b.takeDamage(5);
	ScavTrap	f;
	f.takeDamage(5);
	f.takeDamage(5);
	f.guardGate();
	c.highFivesGuys();
}