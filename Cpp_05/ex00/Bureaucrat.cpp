/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:45:39 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/30 12:01:24 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Unkown"), _grade(150)	{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)	{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& orig):_name(orig._name), _grade(orig._grade)	{
	*this = orig;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& orig)	{
	(void)orig;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)	{
}

std::string Bureaucrat::getName(void) const	{
	return _name;
}

int Bureaucrat::getGrade(void) const {
	return _grade;
}

void	Bureaucrat::raiseGrade(void)	{
	_grade--;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::lowerGrade(void)	{
	_grade++;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()	{
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()	{
	return ("Grade too low");
}

std::ostream &	operator<<(std::ostream & out, Bureaucrat & b)	{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (out);
}