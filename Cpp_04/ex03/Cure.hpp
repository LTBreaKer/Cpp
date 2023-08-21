/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 03:26:45 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/17 04:36:35 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "./AMateria.hpp"

class Cure : public AMateria	{
	public:
		Cure(void);
		Cure(const Cure& orig);
		Cure& operator=(const Cure& orig);
		~Cure(void);

		AMateria* clone() const;
		void use(ICharacter& target);
};