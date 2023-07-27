/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:44:18 by aharrass          #+#    #+#             */
/*   Updated: 2023/07/17 23:45:25 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./Weapon.hpp"

class HumanB	{
	private:
		std::string _name;
		Weapon *_Weapon;
	public:

		HumanB(std::string name);
		HumanB(std::string name, Weapon W);
		~HumanB(void);
		void	attack(void) const;
		void	setWeapon(Weapon &W);
};