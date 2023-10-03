/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:48:28 by aharrass          #+#    #+#             */
/*   Updated: 2023/10/02 19:03:44 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()	{}

PmergeMe::PmergeMe(const PmergeMe & orig)	{
	*this = orig;
}

PmergeMe& PmergeMe::operator=(const PmergeMe & orig)	{
	if (this == &orig)
		return *this;
	*this = orig;
	return *this;
}

PmergeMe::~PmergeMe()	{}

void	PmergeMe::fillContainer(char **av)	{
	int	i = 0;
	long tmp;

	while (av[i])	{
		try	{
			checkArg(av[i]);
		}
		catch(std::exception &e)	{
			throw std::runtime_error(e.what());
		}
		tmp = atol(av[i]);
		if (tmp > INT_MAX || tmp < 0)
			throw std::runtime_error("Unvalid argument");
		_unsortedVec.push_back(tmp);
		_unsortedDeque.push_back(tmp);
		i++;
	}
}

void	PmergeMe::printBefore() const	{
	std::cout << "Before: ";
	for (std::vector<int>::const_iterator it = _unsortedVec.begin(); it != _unsortedVec.end(); it++)	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::merge_insert_vector()	{
	
	//make pairs
	start = std::clock();
	for (std::vector<int>::iterator it = _unsortedVec.begin(); it != _unsortedVec.end(); it++)	{
		if (it == _unsortedVec.begin() && _unsortedVec.size() % 2)	{
			_Vpairs.push_back(std::make_pair(-1, *it));
			continue;
		}
		_Vpairs.push_back(std::make_pair(*it, *(it + 1)));
		it++;
	}
	// swap pairs
	for (std::vector<std::pair<int, int> >::iterator it = _Vpairs.begin(); it != _Vpairs.end(); it++)	{
		if (it->first > it->second)
			std::swap(it->first, it->second);
	}
	// sort pairs
	for(std::vector<std::pair<int, int> >::iterator it = _Vpairs.begin(); it != _Vpairs.end() - 1; it++)	{
		
		std::vector<std::pair<int, int> >::iterator current = it;
		std::vector<std::pair<int, int> >::iterator after = it + 1;
		
		while (after->second < current->second)	{
			std::swap(after->second, current->second);
			if (current != _Vpairs.begin())	{
				after--;
				current--;
			}
		}
	}
	// push second to sorted
	for (std::vector<std::pair<int, int> >::iterator it = _Vpairs.begin(); it != _Vpairs.end(); it++)	{
		_sortedVec.push_back(it->second);
	}
	// insert remaining elements
	for (std::vector<std::pair<int, int> >::iterator it = _Vpairs.begin(); it != _Vpairs.end(); it++)	{
		if (it->first != -1)
			_sortedVec.insert(std::upper_bound(_sortedVec.begin(), _sortedVec.end(), it->first), it->first);
	}
	end = std::clock();
	std::cout << "after: ";
	for(std::vector<int>::iterator it = _sortedVec.begin(); it != _sortedVec.end(); it++)	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << std::fixed;
	std::cout << "Time to process a range of " << _sortedVec.size() << " elements with std::vector : " << (static_cast<double>(end - start) * 1000000) / CLOCKS_PER_SEC << "us" << std::endl;
}

void	PmergeMe::merge_insert_deque()	{
	
	//make pairs
	start = std::clock();
	for (std::deque<int>::iterator it = _unsortedDeque.begin(); it != _unsortedDeque.end(); it++)	{
		if (it == _unsortedDeque.begin() && _unsortedDeque.size() % 2)	{
			_Dpairs.push_back(std::make_pair(-1, *it));
			continue;
		}
		_Dpairs.push_back(std::make_pair(*it, *(it + 1)));
		it++;
	}
	// swap pairs
	for (std::deque<std::pair<int, int> >::iterator it = _Dpairs.begin(); it != _Dpairs.end(); it++)	{
		if (it->first > it->second)
			std::swap(it->first, it->second);
	}
	// sort pairs
	for(std::deque<std::pair<int, int> >::iterator it = _Dpairs.begin(); it != _Dpairs.end() - 1; it++)	{
		
		std::deque<std::pair<int, int> >::iterator current = it;
		std::deque<std::pair<int, int> >::iterator after = it + 1;
		
		while (after->second < current->second)	{
			std::swap(after->second, current->second);
			if (current != _Dpairs.begin())	{
				after--;
				current--;
			}
		}
	}
	// push second to sorted
	for (std::deque<std::pair<int, int> >::iterator it = _Dpairs.begin(); it != _Dpairs.end(); it++)	{
		_sortedDeque.push_back(it->second);
	}
	// insert remaining elements
	for (std::deque<std::pair<int, int> >::iterator it = _Dpairs.begin(); it != _Dpairs.end(); it++)	{
		if (it->first != -1)
			_sortedDeque.insert(std::upper_bound(_sortedDeque.begin(), _sortedDeque.end(), it->first), it->first);
	}
	end = std::clock();
	std::cout << std::fixed;
	std::cout << "Time to process a range of " << _sortedDeque.size() << " elements with std::deque : " << (static_cast<double>(end - start) * 1000000) / CLOCKS_PER_SEC << "us" << std::endl;
}

void	checkArg(char *arg)	{
	int	i = 0;

	while (arg[i])	{
		if (!isdigit(arg[i]))
			throw std::runtime_error("unvalid argument");
		i++;
	}
}