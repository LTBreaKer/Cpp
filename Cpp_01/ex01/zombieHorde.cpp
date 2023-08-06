/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 20:20:02 by aharrass          #+#    #+#             */
/*   Updated: 2023/07/28 16:53:48 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	if (N <= 0)
		return NULL;
	Zombie *z = new Zombie[N];
	for (int i = 0; i < N; i++)
		z[i].setname(name);
	return (z);
}