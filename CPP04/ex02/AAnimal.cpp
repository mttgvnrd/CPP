/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbsAnimal.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:21:31 by mgiovana          #+#    #+#             */
/*   Updated: 2024/03/01 14:35:21 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"

AAnimal::AAnimal() : type("general")
{
    std::cout << "Default AAnimal constructor" << std::endl;
    this->type = "general"; 
}

AAnimal::AAnimal(std::string type) : type(type)
{
    std::cout << "AAnimal type constructor: " << this->type << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "Default AAnimal deconstructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal& src)
{
    std::cout << "AAnimal Copy destructor" << std::endl;
	*this = src;
}

AAnimal& AAnimal::operator=( const AAnimal& src)
{
    if (this != &src)
		this->type = src.type;
	return *this;
}

std::string AAnimal::getType() const
{
    return this->type;
}

/*void AAnimal::makeSound() const
{
    std::cout << "???" << std::endl;
}*/