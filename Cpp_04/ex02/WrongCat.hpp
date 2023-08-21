/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 04:06:48 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/13 04:07:25 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "./WrongAnimal.hpp"

class WrongCat: public WrongAnimal	{
	public:
		WrongCat(void);
		WrongCat(const WrongCat& orig);
		WrongCat&	operator=(const WrongCat& orig);
		~WrongCat(void);

		void makeSound(void) const;
};