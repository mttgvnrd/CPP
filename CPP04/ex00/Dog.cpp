/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:21:47 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/27 14:21:49 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor" << std::endl;
    type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
    type = "Dog";
}

void Dog::makeSound()
{
    std::cout << "Bau Bau Bau" << std::endl;
}
