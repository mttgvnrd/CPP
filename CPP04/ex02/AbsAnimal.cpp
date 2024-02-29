/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbsAnimal.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:21:31 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/29 16:09:38 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AbsAnimal.hpp"

AbsAnimal::AbsAnimal() : type("general")
{
    std::cout << "Default AbsAnimal constructor" << std::endl;
    this->type = "general"; 
}

AbsAnimal::AbsAnimal(std::string type) : type(type)
{
    std::cout << "AbsAnimal type constructor: " << this->type << std::endl;
}

AbsAnimal::~AbsAnimal()
{
    std::cout << "Default AbsAnimal deconstructor" << std::endl;
}

AbsAnimal::AbsAnimal(const AbsAnimal& src)
{
    std::cout << "AbsAnimal Copy destructor" << std::endl;
	*this = src;
}

AbsAnimal& AbsAnimal::operator=( const AbsAnimal& src)
{
    if (this != &src)
		this->type = src.type;
	return *this;
}

std::string AbsAnimal::getType() const
{
    return this->type;
}

void AbsAnimal::makeSound() const
{
    std::cout << "???" << std::endl;
}
