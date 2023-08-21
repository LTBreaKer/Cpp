/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 04:07:54 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/21 15:27:00 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "./ICharacter.hpp"
#include <iostream>

class AMateria
{
    protected:
        std::string type;    
    public:
        AMateria(void);
        AMateria(std::string const & type);
        AMateria(const AMateria& orig);
        AMateria& operator=(const AMateria& orig);
        virtual ~AMateria(void);

        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};