/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 05:41:04 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/18 17:04:51 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"
#include "./DiamondTrap.hpp"

int main(void)	{
	ClapTrap	a("said");
	ScavTrap	b("hamid");
	FragTrap	c("khalid");
	DiamondTrap x("jhin");
	std::cout << "-------------------------" << std::endl;
	DiamondTrap z(x);
std::cout << "-------------------------" << std::endl;
	x.whoAmI();
	x.attack("ff");
	b.attack("ff");
	x.takeDamage(5);
	ScavTrap	f;
	f.takeDamage(5);
	f.takeDamage(5);
	x.guardGate();
	x.highFivesGuys();
}