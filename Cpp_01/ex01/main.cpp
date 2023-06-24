/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 20:18:43 by aharrass          #+#    #+#             */
/*   Updated: 2023/06/18 14:17:37 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

void t(void){
	Zombie	*z;
	z  = zombieHorde(5, "Abbas");
	// z 	=	zombieHorde(5, "Ab");
	delete [] z;
}

int	main(void){
	t();
	system("leaks Apocalypse");
}