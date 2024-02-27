/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:54:49 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/21 15:54:51 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const ClapTrap& src)
{
    std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
    	std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
	if (this != &other)
	{
		this->_name = other._name;
		this->_hp = other._hp;
		this->_ep = other._ep;
		this->_ad = other._ad;
	}
	return(*this);
}

ClapTrap::ClapTrap(const std::string& Name): _name(Name), _hp(10), _ep(10), _ad(0)
{
    std::cout << "Constructor called" << std::endl;
    //std::cout << "Initialized parameters" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_ep > 0)
    {
        std::cout << "ClapTrap " << this->_name << "attacks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
         _ep--;
    }
    else 
        std::cout << "ClapTrap " << this->_name << "doesn't have enough energy points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << "lose " << amount << " hp" << std::endl;
    _hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_ep)
    {
        std::cout << "ClapTrap " << this->_name << "repair " << amount << " hp" << std::endl;
        _hp += amount;
        _ep--;
    }
    else 
        std::cout << "ClapTrap " << this->_name << "doesn't have enough energy points" << std::endl;
}

std::string ClapTrap::GetName() const
{
    return this->_name;
}


