/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:39:06 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/30 14:05:22 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("Unkown"), _signed(false),
	_reqGradeSign(150), _reqGradeExec(150)	{
}

Form::Form(std::string name, const int signeGrade, const int execGrade)	: 
	_name(name), _signed(false), _reqGradeSign(signeGrade), _reqGradeExec(execGrade) {
	if (_reqGradeExec < 1 || _reqGradeSign < 1)
		throw Form::GradeTooHighException();
	else if (_reqGradeExec > 150 || _reqGradeSign > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form & orig) :
	_name(orig._name), _reqGradeSign(orig._reqGradeSign), _reqGradeExec(orig._reqGradeExec)	{
	this->_signed = orig._signed;
}

Form& Form::operator=(const Form & orig)	{
	(void)orig;
	return (*this);
}

Form::~Form()	{
}

const char* Form::GradeTooHighException::what() const throw()	{
	return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()	{
	return ("Grade too low");
}

std::string Form::getName() const	{
	return _name;
}

bool	Form::getSigned() const	{
	return _signed;
}

int	Form::getGradeSign() const	{
	return _reqGradeSign;
}

int Form::getGradeExec() const	{
	return _reqGradeExec;
}

void	Form::beSigned(const Bureaucrat& emp)	{
	if (_signed)
	{
		std::cout << _name << " is already signed" << std::endl;
		return;
	}
	if (emp.getGrade() <= _reqGradeSign)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream &	operator<<(std::ostream & out, Form& f)	{
	std::cout << "Form's information:" << std::endl;
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