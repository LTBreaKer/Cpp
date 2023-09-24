/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 03:11:08 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/24 08:14:58 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void test1()	{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << "top of mstack = " << mstack.top() << std::endl;
	mstack.pop();
	
	std::cout << "size = " << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	std::cout << "------------------------" << std::endl;
	while (it != ite)	{
		std::cout << *it << std::endl;
		++it;
	}
	
	std::stack<int> s(mstack);
	
	return;
}

void test2()	{
	typedef MutantStack<std::string, std::vector<std::string> > mstack_t;
	mstack_t ss;

	ss.push("1");
	ss.push("2");
	ss.push("3");
	ss.push("0");

	ss.pop();
	ss.push("4");
	ss.push("42");
	
	std::stack<std::string, std::vector<std::string> > g(ss);
	
	std::cout << "top = " << g.top() << std::endl;
	
	std::cout << "** Reverse Iterator **" << std::endl;
	for (mstack_t::const_reverse_iterator it = ss.rbegin(); it < ss.rend(); it++)	{
		std::cout << *it << std::endl;
	}
	std::cout << "** Iterator **" << std::endl;
	for (mstack_t::const_iterator it = ss.begin(); it < ss.end(); it++)	{
		std::cout << *it << std::endl;
	}
}

int main()
{
	std::cout << "----- Test 1 -----" << std::endl;
	test1();
	std::cout << "----- Test 2 -----" << std::endl;
	test2();
}
