/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 22:48:57 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/24 07:52:39 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	firstTest()	{
	Span g(11);
	int a[6] = {1, 2, 3, 4, 5, 6};
	std::deque<int> v(a, a + 6);
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
	try	{
		std::cout << g.shortestSpan() << std::endl;
		std::cout << g.longestSpan() << std::endl;
	}
	catch (std::exception &e)	{
		std::cout << e.what() << std::endl;
	}
}

void	bigSpan()	{
	Span t(10000);
	
	try{
		for (int i = 0; i < 10000; i++)	{
			t.addNumber(i - 5000);
		}
		std::cout << t.longestSpan() << std::endl;
		std::cout << t.shortestSpan() << std::endl;
	}
	catch (std::exception &e)	{
		std::cout << "Exception Thrown: " << e.what() << std::endl;
	}
}

void	smallSize()	{
	Span t(1);

	try	{
		t.addNumber(5);
		t.addNumber(5);
	}
	catch (std::exception &e)	{
		std::cout << "Exception Thrown: " << e.what() << std::endl;
	}
	try	{
		t.longestSpan();
	}
	catch (std::exception &e)	{
		std::cout << "Exception Thrown: " << e.what() << std::endl;
	}
	try	{
		t.shortestSpan();
	}
	catch (std::exception &e)	{
		std::cout << "Exception Thrown: " << e.what() << std::endl;
	}
	try	{
		std::vector<int> v;
		for(int i = 0; i < 10; i++)	{
			v.push_back(i);
		}
		t.megaAdd(v.begin(), v.end());
	}
	catch (std::exception &e)	{
		std::cout << "Exception Thrown: " << e.what() << std::endl;
	}
}

int main()	{
	std::cout << "----- First Test -----" << std::endl;
	firstTest();
	std::cout << "----- Large Span -----" << std::endl;
	bigSpan();
	std::cout << "----- Small Size -----" << std::endl;
	smallSize();
}
