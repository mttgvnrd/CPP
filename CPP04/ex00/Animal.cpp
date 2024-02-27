/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:21:31 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/27 14:21:33 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default Animal constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Default Animal deconstructor" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}

void Animal::makeSound() const
{

}
