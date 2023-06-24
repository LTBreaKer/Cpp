/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:35:48 by aharrass          #+#    #+#             */
/*   Updated: 2023/06/18 15:26:42 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"

class HumanA	{
	private:
		std::string _name;
		Weapon  &_Weapon;
	public:
		HumanA(std::string name, Weapon &W);
		~HumanA(void);
		void	attack(void) const;
};