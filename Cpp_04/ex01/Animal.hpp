/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 03:22:23 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/13 03:59:37 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal	{
	protected:
		std::string type;
	public:
	
		Animal(void);
		Animal(const Animal& orig);
		Animal&	operator=(const Animal& orig);
		~Animal(void);
		
		std::string	getType(void) const;
		virtual void	makeSound(void) const;
};