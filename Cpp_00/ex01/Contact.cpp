/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 00:02:10 by aharrass          #+#    #+#             */
/*   Updated: 2023/06/18 11:55:33 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::fill_element(std::string prompt, std::string &var, int check){
	while (var.empty() || check)
	{
		std::cout << prompt;
		std::getline(std::cin, var);
		if (std::cin.eof() == 1)
			exit(0);
		if (var.empty())
			std::cout << "Error: Field empty, try again" << std::endl;
		if (check == 1){
			for (size_t i = 0; i < var.length(); i++){
				if (!i && var[i] == '+' && var[1])
					continue;
				else if (var[i] && !iswdigit(var[i])){
					std::cout << "Error: Invalid Phone number, try again" << std::endl;
					break;
				}
				else if (i == var.length() - 1)
					check = 0;
			}
			if (!check && (var.length() < 7 || var.length() > 19)){
				std::cout << "Error: Invalid Phone number, try again" << std::endl;
				check = 1;
			}
		}
	}
}

void	Contact::fill(int count){
	fill_element("Enter first name: ", _first_name, 0);
	fill_element("Enter last name: ", _last_name, 0);
	fill_element("Enter nickname: ", _nickname, 0);
	fill_element("Enter phone number: ", _phone_number, 1);
	fill_element("Enter darkest secret: ", _dark_secret, 0);
	this->_index = count;
	while (this->_index > 7)
		this->_index -=8;
	return ;
}

void	Contact::print(void) const{
	std::cout << "Contact number " << this->_index << std::endl;
	std::cout << "First name: " << this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phone_number << std::endl;
	std::cout << "Darkest secret: " << this->_dark_secret <<std::endl;
	return ;
}

void	Contact::summary(void) const{
	std::cout << "*" << "    " << this->_index << "     |";
	if (this->_first_name.length() > 10)
		std::cout << this->_first_name.substr(0, 9) + ".|";
	else
		std::cout << std::setw(10) << std::right << this->_first_name
			<< "|";
	if (this->_last_name.length() > 10)
		std::cout << this->_last_name.substr(0, 9) + ".|";
	else
		std::cout << std::setw(10) << std::right << this->_last_name
			<< "|";
	if (this->_nickname.length() > 10)
		std::cout << this->_nickname.substr(0, 9) + ".*" << std::endl;
	else
		std::cout << std::setw(10) << std::right << this->_nickname
			<< "*" << std::endl;
	return ;
}
