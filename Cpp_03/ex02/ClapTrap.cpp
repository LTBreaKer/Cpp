/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 03:50:15 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/18 10:39:50 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Unknown"), _hitPoints(10), _energyPoints(10), _attackDamage(0)	{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap Parametrized contructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& original)	{
	std::cout << "ClapTrap Copy contructor called" << std::endl;
	*this = original;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& original)	{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	this->_name = original._name;
	this->_hitPoints = original._hitPoints;
	this->_energyPoints = original._energyPoints;
	this->_attackDamage = original._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap(void)	{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)	{
	if (_hitPoints == 0)	{
		std::cout <<  "ClapTrap "<< _name << " is dead" << std::endl;
	}
	else if (_energyPoints)	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
							<< _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << _name << " has no energy" << std::endl; 
}

void	ClapTrap::takeDamage(unsigned int amount)	{
	if (_hitPoints == 0)	{
		std::cout << "ClapTrap " << _name << " is already dead" << std::endl;
	}
	else	{
		_hitPoints -= amount;
		if (_hitPoints < 0)
			_hitPoints = 0;
		std::cout << "ClapTrap " << _name << " took " << amount << " points of damage reducing his/her hit points to "
							<< _hitPoints << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)	{
	if (_hitPoints == 0)	{
		std::cout << "ClapTrap " << _name << " is already dead" << std::endl;
	}
	else if (_energyPoints)	{
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " healed for " << amount
							<< " of HP" << std::endl;
		_energyPoints--; 
	}
	else
		std::cout << "ClapTrap " << _name << " has no energy" << std::endl;
}