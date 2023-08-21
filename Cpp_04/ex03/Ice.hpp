/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 03:03:25 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/17 04:36:41 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "./AMateria.hpp"

class Ice : public AMateria	{
	public:
		Ice(void);
		Ice(const Ice& orig);
		Ice& operator=(const Ice& orig);
		~Ice(void);

		AMateria* clone() const;
		void use(ICharacter& target);
};