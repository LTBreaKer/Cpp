/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:39:02 by aharrass          #+#    #+#             */
/*   Updated: 2023/06/17 18:50:48 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie*	newZombie( std::string name ){
	Zombie *z = new Zombie(name);
	return (z);
}