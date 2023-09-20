/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:48:57 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/20 01:15:29 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()	{
	Span g(11);
	int a[6] = {1, 2, 3, 4, 5, 6};
	std::deque<int> v(a, a + 6);
	srand(time(NULL));
	try {
		g.addNumber(6);
		g.addNumber(3);
		g.addNumber(17);
		g.addNumber(9);
		g.addNumber(11);
		g.megaAdd(v.begin(), v.end());
	}
	catch (std::exception &e)	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-----------------" << std::endl;
	try	{
		std::cout << g.shortestSpan() << std::endl;
		std::cout << g.longestSpan() << std::endl;
	}
	catch (std::exception &e)	{
		std::cout << e.what() << std::endl;
	}
}