/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 03:49:37 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/13 04:00:00 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "./Animal.hpp"

class Cat: public Animal	{
	public:
		Cat(void);
		Cat(const Cat& orig);
		Cat&	operator=(const Cat& orig);
		~Cat(void);

		void makeSound(void) const;
};