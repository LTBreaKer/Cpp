/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 21:49:31 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/06 15:17:15 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

char ScalarConverte::_c = 0;
int ScalarConverte::_i = 0;
float ScalarConverte::_f = 0;
double ScalarConverte::_d = 0;


ScalarConverte::ScalarConverte()	{
}

ScalarConverte::ScalarConverte(const ScalarConverte& orig)	{
	(void)orig;
}

ScalarConverte& ScalarConverte::operator=(const ScalarConverte& orig)	{
	(void)orig;
	return *this;
}

ScalarConverte::~ScalarConverte()	{
}

void ScalarConverte::convert(const std::string &rep)	{
	size_t	i = 0;
	int	point_count = 0;
	if (rep == "nanf" || rep == "+inff" || rep == "-inff"){
		is_float(rep);
		return ;
	}
	if (rep == "nan" || rep == "+inf" || rep == "-inf"){
		is_double(rep);
		return ;
	}
	if (rep.length() == 1 && !isdigit(rep[0]))	{
		is_char(rep);
		return;
	}
	else if (rep.length() != 1 && !isdigit(rep[0]) && rep[0] != '+' && rep[0] != '-')	{
		std::cout << "Invalid Input" << std::endl;
		return;
	}
	while (rep[i])	{
		if (!i && (rep[i] == '+' || rep[i] == '-'))	{
			i++;
			continue;
		}
		if (i && !point_count && rep[i] == '.'){
			point_count++;
			i++;
			continue;
		}
		if (point_count == 1 && i == rep.length() - 1 && rep[i] == 'f' && rep[i - 1] != '.'){
			is_float(rep);
			return;
		}
		if (!isdigit(rep[i])){
			std::cout << "Invalid Input" << std::endl;
			return;
		}
		i++;
	}
	if (point_count == 1)
		is_double(rep);
	else
		is_int(rep);
}

void	ScalarConverte::is_char(const std::string &rep)	{

	_c = rep[0];
	_i = static_cast<int>(rep[0]);
	_f = static_cast<float>(rep[0]);
	_d = static_cast<double>(rep[0]);

	std::cout << "char: '" << _c << "'" << std::endl;
	std::cout << "int: " << _i << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << _f << "f" << std::endl;
	std::cout << "double: " << _d << std::endl;
}

void	ScalarConverte::is_int(const std::string &rep)	{
	long long l = atol(rep.c_str());
	_i = atoi(rep.c_str());
	_d = static_cast<double>(l);
	_f = static_cast<float>(l);
	if (!isascii(_i))	{
		std::cout << "char: impossible" << std::endl;
	}
	else	{
		_c = static_cast<char>(_i);
		if (isprint(_c))
			std::cout << "char: '" << _c << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;

	}
	if (l > INT_MAX  || l < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << _i << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << _f << "f" << std::endl;
	std::cout << "double: " << _d << std::endl;

}

void	ScalarConverte::is_float(const std::string &rep)	{
	_f = atof(rep.c_str());
	_i = static_cast<int>(_f);
	_d = static_cast<double>(_f);
	
	if (!isascii(_i))	{
		std::cout << "char: impossible" << std::endl;
	}
	else	{
		_c = static_cast<char>(_i);
		if (isprint(_c))
			std::cout << "char: '" << _c << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;

	}
	if (_f > INT_MAX  || _f < INT_MIN || std::isnan(_f) || std::isinf(_f))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << _i << std::endl;
	std::cout << std::fixed << "float: " << _f << "f" << std::endl;
	std::cout << "double: " << _d << std::endl;
}

void	ScalarConverte::is_double(const std::string &rep)	{
	_d = atof(rep.c_str());
	_i = static_cast<int>(_d);
	_f = static_cast<float>(_d);
	
	if (!isascii(_i))	{
		std::cout << "char: impossible" << std::endl;
	}
	else	{
		_c = static_cast<char>(_i);
		if (isprint(_c))
			std::cout << "char: '" << _c << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;

	}
	if (_d > INT_MAX  || _d < INT_MIN || std::isnan(_d) || std::isinf(_d))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << _i << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << _f << "f" << std::endl;
	std::cout << "double: " << _d << std::endl;
}