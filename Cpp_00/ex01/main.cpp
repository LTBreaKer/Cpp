/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 23:52:29 by aharrass          #+#    #+#             */
/*   Updated: 2023/06/16 10:02:13 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
	std::string cmd;
	Phonebook book;

	while (true)
	{
		std::cout << "Enter one of these commands {ADD, SEARCH, EXIT}: " << std::endl;
		std::getline(std::cin, cmd);
		// std::cin >> cmd;
		if (std::cin.eof() == 1)
			return (0);
		if (cmd == "ADD")
			book.add();
		else if (cmd == "SEARCH")
			book.search();
		else if (cmd == "EXIT")
			return (0);
		else
			std::cout << "Wrong command" << std::endl;
		cmd.clear();
	}
}
