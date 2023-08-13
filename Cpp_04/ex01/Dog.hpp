/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 03:39:15 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/13 03:51:13 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "./Animal.hpp"

class Dog : public Animal	{
	public:
		Dog(void);
		Dog(const Dog& orig);
		Dog&	operator=(const Dog& orig);
		~Dog(void);

		void	makeSound(void) const;
};