/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 23:01:17 by aharrass          #+#    #+#             */
/*   Updated: 2023/06/23 16:41:53 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cwctype>
#include <iostream>

int main(int ac, char **av)
{
	char	c;
	std::string str;
	
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; av[i]; i++)
		{
			str = av[i];
			for (int j = 0; str[j]; j++)
				std::cout << (c = toupper(str[j]));
		}
	}
	std::cout << std::endl;
	return (0);
}
