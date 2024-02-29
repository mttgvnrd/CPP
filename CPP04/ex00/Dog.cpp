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

Dog::Dog() : Animal::Animal("Dog")
{
    std::cout << "Dog constructor" << std::endl;
	this->type = Animal::getType();
}

Dog::~Dog()
{
    std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(Dog const &src) : Animal::Animal(src)
{
    std::cout << "Dog Copy constructor" << std::endl;
	*this = src;
}

Dog &   Dog::operator=(Dog const &src)
{
    if (this != &src)
		this->type = src.type;
	return *this;
}

void Dog::makeSound() const
{
    std::cout << "Bau Bau Bau" << std::endl;
}
