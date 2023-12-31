/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:39:37 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/14 22:30:20 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "./ClapTrap.hpp"

class	ScavTrap : public ClapTrap	{
	public:
	
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& original);
		ScavTrap&	operator=(const ScavTrap& original);
		~ScavTrap(void);

		void	attack(const std::string& target);
		void	guardGate(void);
};
