/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:43:50 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/05 15:43:53 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon) : _gun(weapon)
{
    this->_name = name;
    return;
}

HumanA::~HumanA(void)
{
    return;
}

void    HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_gun.getType() << std::endl;
    return;
}

