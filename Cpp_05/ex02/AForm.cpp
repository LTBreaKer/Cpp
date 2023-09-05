/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:39:06 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/26 12:20:21 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("Unkown"), _signed(false),
	_reqGradeSign(150), _reqGradeExec(150)	{
}

AForm::AForm(std::string name, const int signeGrade, const int execGrade)	: 
	_name(name), _signed(false), _reqGradeSign(signeGrade), _reqGradeExec(execGrade) {
	if (_reqGradeExec < 1 || _reqGradeSign < 1)
		throw AForm::GradeTooHighException();
	else if (_reqGradeExec > 150 || _reqGradeSign > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm & orig) : _reqGradeSign(orig._reqGradeSign), _reqGradeExec(orig._reqGradeExec)	{
	this->_name = orig._name;
	this->_signed = orig._signed;
}

AForm& AForm::operator=(const AForm & orig)	{
	(void)orig;
	return (*this);
}

AForm::~AForm()	{
}

const char* AForm::GradeTooHighException::what() const throw()	{
	return ("Grade too high");
}

const char* AForm::GradeTooLowException::what() const throw()	{
	return ("Grade too low");
}
const char* AForm::FormNotSigned::what() const throw()	{
	return ("Form not signed");
}

std::string AForm::getName() const	{
	return _name;
}

bool	AForm::getSigned() const	{
	return _signed;
}

int	AForm::getGradeSign() const	{
	return _reqGradeSign;
}

int AForm::getGradeExec() const	{
	return _reqGradeExec;
}

void	AForm::beSigned(const Bureaucrat& emp)	{
	if (_signed)
		return;
	if (emp.getGrade() <= _reqGradeSign)
		_signed = true;
	else
		throw AForm::GradeTooLowException();
}

std::ostream &	operator<<(std::ostream & out, AForm& f)	{
	std::cout << "AForm's information:" << std::endl;
	std::cout << "Name : " << f.getName() << std::endl;
	std::cout << "Signed status : ";
	if (f.getSigned())
		std::cout << "yes";
	else
		std::cout << "no";
	std::cout << std::endl;
	std::cout << "Grade requiered to sign : " << f.getGradeSign() << std::endl;
	std::cout << "Grade requiered to execute : " << f.getGradeExec() << std::endl;
	return out;
}