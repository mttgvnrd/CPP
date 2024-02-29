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

Animal::Animal() : type("general")
{
    std::cout << "Default Animal constructor" << std::endl;
    this->type = "general"; 
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "Animal type constructor: " << this->type << std::endl;
}

Animal::~Animal()
{
    std::cout << "Default Animal deconstructor" << std::endl;
}

Animal::Animal(const Animal& src)
{
    std::cout << "Animal Copy destructor" << std::endl;
	*this = src;
}

Animal& Animal::operator=( const Animal& src)
{
    if (this != &src)
		this->type = src.type;
	return *this;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "???" << std::endl;
}
