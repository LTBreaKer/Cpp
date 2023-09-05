/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:12:02 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/28 17:46:56 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()	{
}

Intern::Intern(const Intern & orig)	{
	(void) orig;
}

Intern& Intern::operator=(const Intern & orig)	{
	(void)orig;
	return *this;
}

Intern::~Intern()	{
}

AForm*	Intern::makeForm(std::string type, std::string target) const	{
	std::string	formTypes[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i = 0;
	while (i < 3)	{
		if (type == formTypes[i])
			break;
		i++;
	}
	switch(i)	{
		case(0):
			return (new ShrubberyCreationForm(target));
		case(1):
			return (new RobotomyRequestForm(target));
		case(2):
			return (new PresidentialPardonForm(target));
		default:
			std::cout << "Intern cannot creat " << type << " form" << std::endl;
	}
	return NULL;
}