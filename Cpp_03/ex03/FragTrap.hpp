/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 21:10:32 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/11 18:43:13 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "./ClapTrap.hpp"

class	FragTrap	: virtual public ClapTrap	{
	public:

		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap& original);
		FragTrap&	operator=(const FragTrap& original);
		~FragTrap(void);

		void	attack(const std::string& target);
		void highFivesGuys(void);

};