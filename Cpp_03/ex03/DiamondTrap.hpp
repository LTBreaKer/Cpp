/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 19:30:54 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/16 23:18:39 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"

class DiamondTrap	: public ScavTrap, public FragTrap	{
	private:
		std::string _name;
	
	public:
		
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& original);
		DiamondTrap& operator=(const DiamondTrap& original);
		~DiamondTrap(void);
		
		void attack(const std::string& target);
		void whoAmI(void);
};
