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

Cat::Cat() : Animal::Animal("Cat")
{
    std::cout << "Cat constructor" << std::endl;
	this->type = Animal::getType();
    this->brain = new Brain();
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(Cat const &src) : Animal::Animal(src)
{
    std::cout << "Cat Copy constructor" << std::endl;
	*this = src;
}

Cat &   Cat::operator=(Cat const &src)
{
    if (this != &src)
		this->type = src.type;
	return *this;
}

void Cat::makeSound() const
{
    std::cout << "Miaooooo" << std::endl;
}
