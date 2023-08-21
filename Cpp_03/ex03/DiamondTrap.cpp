 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aharrass <aharrass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 04:43:56 by aharrass          #+#    #+#             */
/*   Updated: 2023/08/16 23:20:20 by aharrass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : _name("Unkown")	{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	ClapTrap::_name = "Unkown_clap_name";
	_energyPoints = 50;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)	{
	std::cout << "DiamondTrap Parametrized contructor called" << std::endl;
	_energyPoints = 50;
}

DiamondTrap::DiamondTrap(const DiamondTrap& original) : ClapTrap(), ScavTrap(), FragTrap()	{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = original;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& original)	{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	this->_name = original._name;
	this->_hitPoints = original._hitPoints;
	this->_energyPoints = original._energyPoints;
	this->_attackDamage = original._attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap(void){
	std::cout << "DiamondTrap Destructor called" << std::endl;
};

void DiamondTrap::attack(const std::string& target)	{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)	{
	std::cout << "Is my real name " << _name << " or am I a ClapTrap and my name is "
						<< ClapTrap::_name << std::endl;
}