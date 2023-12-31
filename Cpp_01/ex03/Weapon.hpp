/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:28:05 by aharrass          #+#    #+#             */
/*   Updated: 2023/07/27 19:37:52 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Weapon {
	private:
		std::string type;
	public:
		Weapon(std::string T);
		~Weapon(void);
		const std::string& getType(void) const;
		void setType(std::string T);
};