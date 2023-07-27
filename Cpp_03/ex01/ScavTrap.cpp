/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:42:43 by aharrass          #+#    #+#             */
/*   Updated: 2023/07/26 15:54:17 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()	{
	std::cout << "ScavTrap default constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)	{
	std::cout << "ScavTrap parametrized contructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& original)	{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = original;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& original)	{
	std::cout << "ScavTrap copy assignement operator called" << std::endl;
	this->_name = original._name;
	this->_hitPoints = original._hitPoints;
	this->_energyPoints = original._energyPoints;
	this->_attackDamage = original._attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap(void)	{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)	{
	if (_hitPoints == 0)	{
		std::cout <<  "ScavTrap "<< _name << " is dead" << std::endl;
	}
	else if (_energyPoints)	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
							<< _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "ScavTrap " << _name << " has no energy" << std::endl; 
}

void	ScavTrap::guardGate(void)	{
	std::cout << "ScavTrap " << _name << " is now in gate keeper mode" << std::endl; 
}