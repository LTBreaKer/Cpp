/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 03:43:00 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/17 04:36:30 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Character : public ICharacter	{
	private:
		std::string _name;
		AMateria *inventory[4];
	public:
		Character(void);
		Character(std::string name);
		Character(const Character& orig);
		Character& operator=(const Character& orig);
		~Character(void);
		
		std::string const&	getName() const;
		void equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};