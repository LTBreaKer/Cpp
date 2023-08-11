/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 05:41:04 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/11 23:07:28 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"
#include "./DiamondTrap.hpp"

int main(void)	{
	// ClapTrap	a("said");
	// ScavTrap	b("hamid");
	// FragTrap	c("khalid");
	DiamondTrap x("jhin");
	DiamondTrap z;

	z = x;
	z.whoAmI();
	z.attack("ff");
	// b.attack("ff");
	x.takeDamage(5);
	// ScavTrap	f;
	// f.takeDamage(5);
	// f.takeDamage(5);
	x.guardGate();
	x.highFivesGuys();
}