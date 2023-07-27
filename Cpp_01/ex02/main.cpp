/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:19:38 by aharrass          #+#    #+#             */
/*   Updated: 2023/07/27 19:35:10 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void){
	std::string s = "HI THIS IS BRAIN";
	std::string *s_ptr = &s;
	std::string &s_ref = s;

	std::cout << &s << std::endl;
	std::cout << s_ptr << std::endl;
	std::cout << &s_ref << std::endl;
	std::cout << s << std::endl;
	std::cout << *s_ptr << std::endl;
	std::cout << s_ref << std::endl;
}
