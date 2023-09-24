/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:36:40 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/24 07:11:52 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0)	{
}

Span::Span(unsigned int N) : _size(N)	{
}

Span::Span(const Span & orig) : _arr(orig._arr), _size(orig._size)	{
}

Span& Span::operator=(const Span & orig)	{
	if (this == &orig)
		return *this;
	this->_size = orig._size;
	this->_arr = orig._arr;
	return *this;
}

Span::~Span()	{
}

void	Span::addNumber(int i)	{
	if (_arr.size() == _size)
		throw std::runtime_error("\"addNumber\" Can't add a number: Size too small");
	_arr.push_back(i);
}

int	Span::longestSpan()	{
	if (_arr.size() < 2)
		throw std::runtime_error("\"longestSpan\" Can't look for a span: Size too small");
		
	std::vector<int> tmp(_arr);
	
	std::sort(tmp.begin(), tmp.end());
	return (tmp[tmp.size() - 1] - tmp[0]);
}

int Span::shortestSpan()	{
	if (_arr.size() < 2)
		throw std::runtime_error("\"shortestSpan\" Can't look for a span: Size too small");
	
	std::vector<int> tmp(_arr);
	
	std::sort(tmp.begin(), tmp.end());
	int sh = tmp[1] - tmp[0];
	int t = 0;
	for (size_t i = 1; i < (tmp.size() - 1); i++)	{
		t = tmp[i + 1] - tmp[i];
		if (t < sh)
			sh = t;
	}
	return sh;
}