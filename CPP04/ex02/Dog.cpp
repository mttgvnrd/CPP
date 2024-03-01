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

Dog::Dog() : AAnimal::AAnimal("Dog")
{
    std::cout << "Dog constructor" << std::endl;
	this->type = AAnimal::getType();
    this->brain = new Brain();
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(Dog const &src) : AAnimal::AAnimal(src)
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
