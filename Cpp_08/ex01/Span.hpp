/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:31:44 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/20 01:14:23 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iterator>
#include <deque>

class Span	{
	private:
		std::vector<int>	_arr;
		unsigned int		_size;
	public:
		Span();
		Span(unsigned int);
		Span(const Span &);
		Span& operator=(const Span &);
		~Span();

		void	addNumber(int i);
		int		longestSpan();
		int		shortestSpan();
		template<typename T>
		void	megaAdd(T first, T end)	{
			unsigned int d = std::distance(first, end);
			
			if (d <= _size - _arr.size())
				std::copy(first, end, std::back_inserter(_arr));
			else
				throw std::runtime_error("Insufficient size");
		}
};