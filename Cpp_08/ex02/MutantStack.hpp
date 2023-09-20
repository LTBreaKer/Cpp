/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 02:08:57 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/19 05:19:18 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <deque>
#include <list>
#include <vector>
#include <queue>

template<typename T, typename container = std::deque<T> >
class MutantStack : public std::stack<T, container>	{
	
	public:
	
		MutantStack()	{}
		
		MutantStack(const MutantStack & orig)	{
			*this = orig;
		}
		
		MutantStack& operator=(const MutantStack & orig)	{
			if (this = &orig)
				return *this;
			*this = orig;
				return *this;
		}
		
		~MutantStack()	{}
		typedef typename container::iterator iterator;
		typedef typename container::reverse_iterator reverse_iterator;

		iterator	begin()	{return this->c.begin();}
		iterator	end()	{return this->c.end();}
		
		reverse_iterator	rbegin()	{return this->c.rbegin();}
		reverse_iterator	rend()	{return this->c.rend();}
		
};