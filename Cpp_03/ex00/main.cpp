/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 05:41:04 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/18 09:52:39 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

int main(void)	{
	ClapTrap b("kai'sa");
	ClapTrap a = b;
	
	a = b;
	for (int i = 0; i < 11; i++)
		a.attack("jhin");
	a.takeDamage(5);
	a.beRepaired(1);
	a.takeDamage(7);
	a.beRepaired(5);
	a.attack("gg");
}