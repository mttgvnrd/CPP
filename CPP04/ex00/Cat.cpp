/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:22:09 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/27 14:22:10 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor" << std::endl;
    type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat destructor" << std::endl;
    type = "Cat";
}

void Cat::makeSound()
{
    std::cout << "Miaooooo" << std::endl;
}
