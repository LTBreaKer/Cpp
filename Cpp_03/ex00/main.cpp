/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 05:41:04 by aharrass          #+#    #+#             */
/*   Updated: 2023/07/18 06:33:49 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

int main(void)	{
	ClapTrap a;
	
	a.attack("jhin");
	a.attack("jhin");
	a.attack("jhin");
	a.attack("jhin");
	a.attack("jhin");
	a.attack("jhin");
	a.attack("jhin");
	a.attack("jhin");
	a.attack("jhin");
	a.attack("jhin");
	a.attack("jhin");
	a.attack("jhin");
	a.takeDamage(5);
	a.beRepaired(1);
	a.takeDamage(7);
	a.beRepaired(5);
	a.attack("gg");
}