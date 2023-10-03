/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:45:02 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/30 17:31:31 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void	calculate(std::stack<int> & st, char op)	{
	int a = 0;
	int b = 0;
	int res = 0;

	if (st.size() < 2)
		throw std::runtime_error("Error3");
	a = st.top();
	st.pop();
	b = st.top();
	st.pop();
	if (op == '-')
		res = b - a;
	else if (op == '+')
		res = a + b;
	else if (op == '*')
		res = a * b;
	else if (op == '/')	{
		if (a == 0)
			throw std::runtime_error("Error5");
		res = b / a;
	}
	st.push(res);
}

void	populateStack(std::stack<int> &st, std::string data)	{
	size_t	j = 0;
	size_t	i = 0;
	int		x = 0;

	while(i != data.length())	{
		while(isspace(data[i]))
			i++;
		if (i == data.length())
			break;
		if (data[i] == '+' || data[i] == '-' || data[i] == '*' || data[i] == '/')	{
			try	{
				calculate(st, data[i]);
			}
			catch(std::exception &e)	{
				throw std::runtime_error(e.what());
			}
			i++;
			continue;
		}
		j = i;
		if (isdigit(data[i]))	{
			while (isdigit(data[j]))	{
				j++;
			}
			if (j - i > 2)
				throw std::runtime_error("Error1");
			x = atoi(data.substr(i, j - i).c_str());
			if (x > 9)
				throw std::runtime_error("Error1.5");
			st.push(x);
			i = j;
		}
		else
			throw std::runtime_error("Error2");
	}
	if (st.size() != 1)
		throw std::runtime_error("Error");
	std::cout << st.top() << std::endl;
}
