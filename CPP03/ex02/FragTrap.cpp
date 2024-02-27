/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:33:17 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/26 16:33:18 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
    std::cout << "FragTrap default deconstructor" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src.GetName())
{
	std::cout << "FragTrap Copy constructor" << std::endl;
	*this = src;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
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

FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
	std::cout << "FragTrap default constructor" << std::endl;
	//std::cout << "FragTrap initialized parameters" << std::endl;
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
}

void FragTrap::highFivesGuys(void)
{
        std::cout << "FragTrap" << this->_name << " request a high five" << std::endl;
}