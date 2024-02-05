/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:43:29 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/01 14:43:31 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
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