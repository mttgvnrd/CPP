/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:47:48 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/05 13:47:50 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie(void)
{
    return;
}

Zombie::~Zombie()
{
 std::cout << this->_name << ": is out, goodbye!" <<std::endl;
 return;
}

void Zombie::announce(void)
{
 std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}

void    Zombie::setName(std::string name)
{
    this->_name = name;
    return;
}