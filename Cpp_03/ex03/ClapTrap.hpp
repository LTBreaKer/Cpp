/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 03:41:26 by aharrass          #+#    #+#             */
/*   Updated: 2023/07/26 15:39:22 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap	{
	protected:
	
		std::string	_name;
		int					_hitPoints;
		int					_energyPoints;
		int					_attackDamage;
	
	public:

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& original);
		ClapTrap&	operator=(const ClapTrap& original);
		~ClapTrap(void);
		

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
			
};
