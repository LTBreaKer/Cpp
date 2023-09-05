/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:16:57 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/05 17:29:38 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()	{
	Data d;
	d.i = 5;
	d.f = 3.14f;
	d.c = 'a';
	uintptr_t s;

	s = Serializer::serialize(&d);
	Data *r = Serializer::deserialize(s);
	std::cout << (*r).i << std::endl;
	std::cout << (*r).f << std::endl;
	std::cout << (*r).c << std::endl;
}