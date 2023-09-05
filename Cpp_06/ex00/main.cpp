/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:18:29 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/03 16:20:20 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

int main(int ac, char **av)	{
	if (ac != 2)	{
		std::cout << "Invalid number of arguments" << std::endl;
		return(1);
	}
	ScalarConverte::convert(av[1]);
}