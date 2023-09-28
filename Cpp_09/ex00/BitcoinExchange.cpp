/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:18:25 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/28 18:07:59 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Btc::Btc()	{}

Btc::Btc(const std::string file) : _fileName(file)	{}

Btc::Btc(const Btc & orig)	{
	*this = orig;
}

Btc& Btc::operator=(const Btc & orig)	{
	if (this == &orig)
		return *this;
	*this = orig;
	return *this;
}

Btc::~Btc()	{}

void Btc::fillDataBase()	{
	std::ifstream	file("data.csv");
	std::string		buffer;
	int				i = 0;
	
	if (file.fail())
		throw std::runtime_error("Error: could not open file: " + _fileName);
	std::getline(file, buffer);
	while (!file.eof())	{
		std::getline(file, buffer);
		i = buffer.find(',');
		if (!buffer.substr(0, i).empty())
			_dataBase[buffer.substr(0, i)] = atof(buffer.substr(i + 1, buffer.length() - i - 1).c_str());
	}
	file.close();
}

void	Btc::checkDate(std::string date, unsigned int i, unsigned int j, std::string buffer) const	{
	int year;
	int month;
	int day;

	(void)buffer;
	year = atoi(date.c_str());
	date.erase(0, i + 1);
	month = atoi(date.c_str());
	date.erase(0, j - i);
	day = atoi(date.c_str());
	if (year < 2009 || (year == 2009 && day < 9) || month < 1 || month > 12 || day > 31)
		throw std::runtime_error("Error: bad input => " + buffer);
	if ((month == 2 && year % 2 != 0 && day > 28) || (month == 2 && day > 29))
		throw std::runtime_error("Error: bad input => " + buffer);
	if (month != 2 && month % 2 == 0 && day > 30 && month < 8)
		throw std::runtime_error("Error: bad input => " + buffer);
	if (month != 2 && month % 2 != 0 && day > 30 && month > 8)
		throw std::runtime_error("Error: bad input => " + buffer);
}

void	Btc::printResult(std::pair<std::string, float> & line, std::string & buffer) const	{
	unsigned int i = 0;
	unsigned int j = 0;

	i = line.first.find('-');
	if (i == static_cast<unsigned int>(std::string::npos))
		throw std::runtime_error("Error: bad input => " + buffer);
	j = line.first.substr(i + 1, line.first.length() - i - 1).find('-');
	if (j == static_cast<unsigned int>(std::string::npos))
		throw std::runtime_error("Error: bad input => " + buffer);
	j += i + 1;
	if (j - i < 3)	{
		line.first.insert(i + 1, 1, '0');
		j++;
	}
	if (j + 3 > line.first.length())
		line.first.insert(j + 1, 1, '0');
	try	{
		checkDate(line.first, i, j, buffer);
	}
	catch (std::exception &e)	{
		std::cout << e.what() << std::endl;
	}
}

void	Btc::parseFile() const	{
	std::ifstream	file(_fileName.c_str());
	std::string		buffer;
	int				i = 0;
	std::string		date;
	float			value;
	
	if (file.fail() == 1)
		throw std::runtime_error("Error: could not open file: " + _fileName);
		
	std::getline(file, buffer);
	if (buffer != "date | value")
		throw std::runtime_error("Error: first line should be: \"date | value\"");
	while (!file.eof())	{
		std::getline(file, buffer);
		i = buffer.find('|');
		if (i == static_cast<int>(std::string::npos) || buffer[i - 1] != ' ' || buffer[i + 1] != ' '
			|| !isdigit(buffer[i - 2]) || (!isdigit(buffer[i + 2])
			&& buffer[i + 2] != '-')){
			std::cout << "Error: bad input => " << buffer << std::endl;
			continue;
		}
		date = buffer.substr(0, i - 1);
		value = atof(buffer.substr(i + 2, buffer.length() - i - 2).c_str());
		if (value < 0)	{
			std::cout << "Error: not a positive number." << std::endl;
			continue;
		}
		else if (value > 1000)	{
			std::cout << "Error: too large a number." << std::endl;
			continue;
		}
		std::pair<std::string, float> line(date, value);
		try	{
			printResult(line, buffer);
		}
		catch(std::exception & e)	{
			std::cout << e.what() << std::endl;
		}
	}
}