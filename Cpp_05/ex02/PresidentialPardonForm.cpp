/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:19:49 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/28 19:26:43 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
	AForm("PresidentialPardonForm", 25, 5), _target("Unknown")	{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	AForm("PresidentialPardonForm", 25, 5), _target(target)	{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & orig) :
	AForm(orig)	{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm & orig)	{
	(void) orig;
	return (*this);
}

std::string PresidentialPardonForm::getTarget() const	{
	return (_target);
}

PresidentialPardonForm::~PresidentialPardonForm()	{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const	{
	if (!getSigned())
		throw AForm::FormNotSigned();
	else if (getGradeExec() < executor.getGrade())
		throw AForm::GradeTooLowException();
	else	{
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox"
				  << std::endl;
	}
}