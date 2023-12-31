/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:56:32 by aharrass          #+#    #+#             */
/*   Updated: 2023/07/28 17:07:19 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

Harl::Harl(void){
}

Harl::~Harl(void){
}

void	Harl::debug(void){
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "love having extra bacon for my "
						<<"7XL-double-cheese-triple-pickle-special-ketchup"
						<<" burger. I really do!" << std::endl;
}

void	Harl::info(void){
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger! If you did,"
						<<" I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void){
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming for years whereas you started"
						<< " working here since last month." << std::endl;
}

void	Harl::error(void){
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now."
						<< std::endl;
}

void	Harl::complain(std::string level){
	std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	size_t	i = 0;
	while (i < 4){
		if (lvl[i] == level)
				break;
		i++;
	}
	switch (i)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			std::cout	<< "[ Probably complaining about insignificant problem ]"
								<< std::endl;
	}
}