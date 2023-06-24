/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 00:37:45 by aharrass          #+#    #+#             */
/*   Updated: 2023/06/17 18:40:31 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	Phonebook::_count = 0;
	Phonebook::_oldest = 0;
}

Phonebook::~Phonebook()
{
}

void Phonebook::add(void)
{
	Contact new_contact;

	new_contact.fill(_count);
	if (_count < 8)
		_contacts[_count] = new_contact;
	else
		_contacts[_oldest++] = new_contact;
	if (_oldest == 8)
		_oldest = 0;
	_count++;
}

void Phonebook::search(void) const {
	int nb = _count;
	std::string ind;
	unsigned long index;
	
	if (nb == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return;
	}
	std::cout << "***********|**********|**********|***********" << std::endl
						<< "*  Index   |First name|Last name | Nickname *" << std::endl
						<< "***********|**********|**********|***********" << std::endl;
	if (_count > 8)
		nb = 8;
	for (int i = 0; i < nb; i++)
		_contacts[i].summary();
	std::cout << "***********|**********|**********|***********" << std::endl;
	if (nb)
	{
		std::cout << "Input an index: ";
		std::getline(std::cin, ind);
		if (std::cin.eof() == 1)
			exit(0);
		for (size_t i = 0; i < ind.length(); i++){
			if (!std::iswdigit(ind[i]))
			{
				std::cout << "Error: Invalid index" << std::endl;
				return;
			}
		}
		index = std::stoul(ind, NULL, 10);
		if (index < 0 || (int)index >= nb)
		{
			std::cout << "Error: Invalid index" << std::endl;
			return;
		}
		else
			_contacts[index].print();
	}
}
