/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:18:25 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/30 14:16:00 by aharrass         ###   ########.fr       */
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

void	Btc::parseDate(std::string date, std::string buffer, int i, int j) const	{
	std::string tmp;

	(void)j;
	tmp = date.substr(0, i);
	if (tmp.length() > 4)
		throw std::runtime_error("Error: bad input => " + buffer);
	for (unsigned int k = 0; k != tmp.length(); k++)	{
		if (!isdigit(tmp[k]))
			throw std::runtime_error("Error: bad input => " + buffer);
	}
	tmp = date.substr(i + 1, j - i - 1);
	if (tmp.length() > 2)
		throw std::runtime_error("Error: bad input => " + buffer);
	for (unsigned int k = 0; k != tmp.length(); k++)	{
		if (!isdigit(tmp[k]))
			throw std::runtime_error("Error: bad input => " + buffer);
	}
	tmp = date.substr(j + 1, date.length() - j - 1);
	if (tmp.length() > 2)
		throw std::runtime_error("Error: bad input => " + buffer);
	for (unsigned int k = 0; k != tmp.length(); k++)	{
		if (!isdigit(tmp[k]))
			throw std::runtime_error("Error: bad input => " + buffer);
	}
}

void	Btc::checkDate(std::pair<std::string, float> line, unsigned int i, unsigned int j, std::string buffer) const	{
	int year;
	int month;
	int day;
	std::string tmp(line.first);

	(void)buffer;
	
	try	{
		parseDate(tmp, buffer, i, j);
	}
	catch (std::exception &e)	{
		std::cout << e.what() << std::endl;
		return;
	}
	year = atoi(line.first.c_str());
	line.first.erase(0, i + 1);
	month = atoi(line.first.c_str());
	line.first.erase(0, j - i);
	day = atoi(line.first.c_str());
	if (year < 2009 || (year == 2009 && month == 1 && day < 2) || month < 1 || month > 12 || day > 31 || day < 1)
		throw std::runtime_error("Error: bad input => " + buffer);
	if ((month == 2 && ((year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)) && day > 28)) || (month == 2 && day > 29))
		throw std::runtime_error("Error: bad input => " + buffer);
	if (month != 2 && month % 2 == 0 && day > 30 && month < 8)
		throw std::runtime_error("Error: bad input => " + buffer);
	if (month != 2 && month % 2 != 0 && day > 30 && month > 8)
		throw std::runtime_error("Error: bad input => " + buffer);
	time_t tmb = time(NULL);
	tm	*ltm = localtime(&tmb);
	if (ltm->tm_year + 1900 < year || (ltm->tm_year + 1900 == year && ((ltm->tm_mon + 1 < month)
		|| (ltm->tm_mon + 1 == month && ltm->tm_mday < day))))
		throw std::runtime_error("Error: bad input => " + buffer);
	std::map<std::string, float>::const_iterator it = _dataBase.lower_bound(tmp);
	if (it->first != tmp && it != _dataBase.begin())
		--it;
	std::cout << std::fixed << std::setprecision(2);
	std::cout << tmp << " => " << line.second << " = " << (line.second * it->second) << std::endl;   
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
		checkDate(line, i, j, buffer);
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
	std::string		tmp;
	int				w = 0;
	
	if (file.fail() == 1)
		throw std::runtime_error("Error: could not open file: " + _fileName);
		
	std::getline(file, buffer);
	if (buffer != "date | value")
		throw std::runtime_error("Error: first line should be: \"date | value\"");
	while (!file.eof())	{
		w = 0;
		std::getline(file, buffer);
		i = buffer.find('|');
		if (i == static_cast<int>(std::string::npos) || buffer[i - 1] != ' ' || buffer[i + 1] != ' '
			|| !isdigit(buffer[i - 2]) || (!isdigit(buffer[i + 2])
			&& buffer[i + 2] != '-')){
			std::cout << "Error: bad input => " << buffer << std::endl;
			continue;
		}
		date = buffer.substr(0, i - 1);
		tmp = buffer.substr(i + 2, buffer.length() - i - 2);
		if (tmp.length())	{
			for (unsigned int k = 0; k != tmp.length(); k++)	{
				if (!k && tmp[k] == '-')
					continue;
				if (k && tmp[k] == '.' && isdigit(tmp[k - 1]) && isdigit(tmp[k + 1]))	{
					continue;
				}
				if (!isdigit(tmp[k]))	{
					std::cout << "Error: bad input => " << buffer << std::endl;
					w++;
					break;
				}
			}
		}
		if (w)
			continue;
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