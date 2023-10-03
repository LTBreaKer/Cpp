/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:45:14 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/30 16:27:53 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)	{
	if (ac != 2)	{
		std::cout << "Error: invalid input." << std::endl;
		exit(1);
	}
	std::stack<int> st;
	try	{
		populateStack(st, av[1]);
	}
	catch(std::exception &e)	{
		std::cout << e.what() << std::endl;
		exit(1);
	}
	return (0);
}