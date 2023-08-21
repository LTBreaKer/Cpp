/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 04:03:19 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/13 04:05:21 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal	{
	protected:
		std::string type;
	public:
	
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& orig);
		WrongAnimal&	operator=(const WrongAnimal& orig);
		~WrongAnimal(void);
		
		std::string	getType(void) const;
		void	makeSound(void) const;
};