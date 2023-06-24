/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:27:07 by aharrass          #+#    #+#             */
/*   Updated: 2023/06/17 20:27:52 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef ZOMBIE_H
// # define ZOMBIE_H
# pragma once

# include <iostream>
# include <string>

class Zombie {
	private:
		std::string _name;
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void	setname(std::string name);
		void	announce(void);
};

Zombie* zombieHorde( int N, std::string name );

// #endif