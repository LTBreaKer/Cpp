/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:41:05 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/28 13:40:11 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)	{
	(void)av;
	if (ac == 1)	{
		std::cout << "Error: could not open file." << std::endl;
		exit(2);
	}
	else if (ac != 2)	{
		std::cout << "Error: invalid input." << std::endl;
		exit(1);
	}
	else	{
		try{
			Btc b(av[1]);

			b.fillDataBase();
			b.parseFile();
		}
		catch(std::exception &e)	{
			std::cout << e.what() << std::endl;
			exit (1);
		}
	}
}