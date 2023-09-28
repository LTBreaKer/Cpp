/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:38:02 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/28 16:47:01 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include <map>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <exception>

class Btc	{
	
	private:
	
		std::map<std::string, float> _dataBase;
		std::string _fileName;

	public:
		
		Btc();
		Btc(const std::string);
		Btc(const Btc &);
		Btc& operator=(const Btc &);
		~Btc();
		
		void	fillDataBase();
		void	checkDate(std::string, unsigned int i, unsigned int j, std::string buffer) const;
		void	printResult(std::pair<std::string, float> &, std::string &) const;
		void	parseFile() const;
};