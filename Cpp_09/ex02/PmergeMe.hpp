/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:43:13 by aharrass          #+#    #+#             */
/*   Updated: 2023/10/02 19:00:08 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <iostream>
#include <vector>
#include <list>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <exception>
#include <algorithm>
#include <ctime>
#include <deque>
#include <climits>

class	PmergeMe	{
	private:
	
		std::vector<int> _unsortedVec;
		std::deque<int> _unsortedDeque;
		std::vector<std::pair<int, int> > _Vpairs;
		std::deque<std::pair<int, int> > _Dpairs;
		std::vector<int> _sortedVec;
		std::deque<int> _sortedDeque;
		std::clock_t start;
		std::clock_t end;
		
	public:
	
		PmergeMe();
		PmergeMe(const PmergeMe &);
		PmergeMe&	operator=(const PmergeMe &);
		~PmergeMe();
		
		void	fillContainer(char **);
		void	printBefore() const;
		void	merge_insert_vector();
		void	merge_insert_deque();
};

void	checkArg(char *arg);