/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 21:25:27 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/10 23:06:28 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()	{
	std::cout << "FragTrap default constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)	{
	std::cout << "FragTrap parametrized contructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& original)	{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = original;
}

FragTrap& FragTrap::operator=(const FragTrap& original)	{
	std::cout << "FragTrap copy assignement operator called" << std::endl;
	this->_name = original._name;
	this->_hitPoints = original._hitPoints;
	this->_energyPoints = original._energyPoints;
	this->_attackDamage = original._attackDamage;
	return (*this);
}

FragTrap::~FragTrap(void)	{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::attack(const std::string& target)	{
	if (_hitPoints == 0)	{
		std::cout <<  "FragTrap "<< _name << " is dead" << std::endl;
	}
	else if (_energyPoints)	{
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing "
							<< _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "FragTrap " << _name << " has no energy" << std::endl; 
}

void	FragTrap::highFivesGuys(void)	{
	std::cout << "FragTrap " << _name << " is asking for a highfive (:" << std::endl;
}
