/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 05:41:04 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/18 10:38:23 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"

int main(void)	{
	ClapTrap	a("said");
	ScavTrap	b("hamid");
	FragTrap	d("test");
	FragTrap	c(d);

	b.attack("ff");
	b.takeDamage(5);
	ScavTrap	f;
	f.takeDamage(5);
	f.takeDamage(5);
	f.guardGate();
	c.attack("tt");
	c.takeDamage(95);
	c.highFivesGuys();
	c.takeDamage(5);
	c.highFivesGuys();
}