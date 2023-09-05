/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:47:05 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/28 19:26:52 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("ShrubberyCreationForm", 145, 137), _target("Uknown")	{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	AForm("ShrubberyCreationForm", 145, 137), _target(target)	{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & orig) : AForm(orig)	{
	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm & orig)	{
	(void)orig;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()	{
}

std::string ShrubberyCreationForm::getTarget() const	{
	return (_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const	{
	if (!getSigned())
		throw AForm::FormNotSigned();
	else if (getGradeExec() < executor.getGrade())
		throw AForm::GradeTooLowException();
	else	{
		std::ofstream myFile((_target + "_shrubbery").c_str());

		myFile << "               ,@@@@@@@," << std::endl;
		myFile << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
		myFile << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
		myFile << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
		myFile << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
		myFile << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
		myFile << "   `&%\\ ` /%&'    |.|        \\ '|8'"	<< std::endl;
		myFile << "       |o|        | |         | |" << std::endl;
		myFile << "       |.|        | |         | |" << std::endl;
		myFile << "     \\/ ._\\//_/__/  ,\\_//___\\/.  \\_//__/_" << std::endl;
		myFile.close();
	}
}