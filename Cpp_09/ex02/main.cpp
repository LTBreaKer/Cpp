/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:01:45 by aharrass          #+#    #+#             */
/*   Updated: 2023/10/02 15:55:43 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)	{
	if (ac <= 2)	{
		std::cout << "Not enough numbers to sort" << std::endl;
		exit(1);
	}
	PmergeMe sub;
	try	{
		sub.fillContainer(av + 1);
		sub.printBefore();
		sub.merge_insert_vector();
		sub.merge_insert_deque();
	}
	catch(std::exception &e)	{
		std::cout << e.what() << std::endl;
	}
	
}