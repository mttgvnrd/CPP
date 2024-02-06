/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:43:19 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/05 15:43:21 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string firstType)
{
	this->_type = firstType;
	return ;
}

Weapon::~Weapon(void)
{
    return;
}

std::string const & Weapon::getType( void ) const
{
    return this->_type;
}

void	Weapon::setType( std::string type )
{
	this->_type = type;
	return ;
}