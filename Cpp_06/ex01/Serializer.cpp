/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:10:41 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/05 16:16:02 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()	{
}

Serializer::Serializer(const Serializer & orig)	{
	(void)orig;
}

Serializer& Serializer::operator=(const Serializer & orig)	{
	(void)orig;
	return *this;
}

Serializer::~Serializer()	{
}

uintptr_t	Serializer::serialize(Data* ptr)	{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw)	{
	return(reinterpret_cast<Data*>(raw));
}