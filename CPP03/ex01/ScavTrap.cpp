/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:02:30 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/23 15:02:33 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap default deconstructor" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src.GetName())
{
	std::cout << "ScavTrap Copy constructor" << std::endl;
	*this = src;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
	{
		this->_name = other._name;
		this->_hp = other._hp;
		this->_ep = other._ep;
		this->_ad = other._ad;
	}
	return(*this);
}

ScavTrap::ScavTrap(std::string& name): ClapTrap(name)
{
	std::cout << "ScavTrap default constructor" << std::endl;
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
//	std::cout << "ScavTrap initialized parameters" << std::endl;
}

void ScavTrap::guardGate() const
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode " << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
}