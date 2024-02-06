/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:44:05 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/05 15:44:07 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name)
{
    this->_name = name;
    this->_gun = NULL;
    return ;
}

HumanB::~HumanB(void)
{
    return ;
}

void    HumanB::attack(void)
{
	if (this->_gun != NULL)
        std::cout << this->_name << " attacks with their " << this->_gun->getType() << std::endl;
	else
	    return ;
}

void	HumanB::setWeapon( Weapon& weapon )
{
	this->_gun = &weapon;
	return ;
}