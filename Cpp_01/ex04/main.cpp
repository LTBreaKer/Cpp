/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:15:40 by aharrass          #+#    #+#             */
/*   Updated: 2023/06/19 12:39:01 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Replace.hpp"

int main(int ac, char **av){
	if (ac < 4){
		std::cout << "Error: Invalid arguments" << std::endl;
		std::cout	<< "Usage: file name, String to replace, string replacement" << std::endl;
		return (1);
	}
	Replace	r(av[1], av[2], av[3]);
	r.readFile();
	r.replaceContent();
	r.writeNewFile();
	return (0);
}