/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 22:06:55 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/16 19:31:00 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <set>
#include <deque>

int main()	{
	int a[] = {1, 2, 3, 4, 5, 6};
	std::vector<int> v(a, a + 6);

	try	{
		std::vector<int>::const_iterator g = easyfind(v, 5);
		std::cout << *g << std::endl;
		for (std::vector<int>::const_iterator it = v.begin(); it < v.end(); it++)	{
			std::cout << *it << std::endl;
		}
	}
	catch (std::exception &e)	{
		std::cout << e.what() << std::endl;
	}
}