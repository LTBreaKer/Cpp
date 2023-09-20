/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 03:11:08 by aharrass          #+#    #+#             */
/*   Updated: 2023/09/20 01:31:31 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
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
	
	return 0;
}
// int main()	{
// 	std::list<int> mstack;
	
// 	mstack.push_back(1);
// 	mstack.push_back(2);
// 	mstack.push_back(3);
	
// 	std::cout << "top = " << mstack.front() << std::endl;
// 	std::cout << "begin = " << *mstack.begin() << std::endl;
// }