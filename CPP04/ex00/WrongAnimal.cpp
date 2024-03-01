/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:23:12 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/27 14:23:13 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("[WrongAnimal]general")
{
    std::cout << "Default WrongAnimal constructor" << std::endl;
    this->type = "[WrongAnimal]general"; 
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
    std::cout << "WrongAnimal type constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Default WrongAnimal deconstructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
    std::cout << "WrongAnimal Copy destructor" << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& src)
{
    if (this != &src)
		this->type = src.type;
	return *this;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "[WrongAnimal] ???" << std::endl;
}
