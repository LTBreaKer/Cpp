/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:36:15 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/28 19:26:44 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("Unknown")	{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	AForm("RobotomyRequestForm", 72, 45), _target(target)	{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & orig) :
	AForm(orig)	{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm & orig)	{
	(void) orig;
	return (*this);
}

std::string RobotomyRequestForm::getTarget() const	{
	return (_target);
}

RobotomyRequestForm::~RobotomyRequestForm()	{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const	{
	if (!getSigned())
		throw AForm::FormNotSigned();
	else if (getGradeExec() < executor.getGrade())
		throw AForm::GradeTooLowException();
	else	{
		std::cout << "Brrrrrrrrrrrrrrrrrrrrrrrrrrr..." << std::endl;
		srand(time(0));
		int rando = rand();
		if (rando % 2)
			std::cout << _target << " has been robotomized succefully";
		else
			std::cout << _target << "'s robotomization failed";
		std::cout << std::endl;
	}
}