/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 22:06:55 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/24 06:59:52 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main()	{
	int a[] = {1, 2, 3, 4, 5, 6};
	std::vector<int> v(a, a + 6);
	std::list<int> l(a, a + 6);
	std::deque<int> d(a, a + 6);

	try	{
		std::cout << easyfind(v, 5) << std::endl;
	}
	catch (std::exception &e)	{
		std::cout << "Exception thrown: " << e.what() << std::endl;
	}
	try	{
		std::cout << easyfind(l, 7) << std::endl;
	}
	catch (std::exception &e)	{
		std::cout << "Exception thrown: " << e.what() << std::endl;
	}
	try	{
		std::cout << easyfind(d, 0) << std::endl;
	}
	catch (std::exception &e)	{
		std::cout << "Exception thrown: " << e.what() << std::endl;
	}
}