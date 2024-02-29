/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:22:52 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/27 14:22:54 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal::WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constructor" << std::endl;
	this->type = WrongAnimal::getType();
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal::WrongAnimal(src)
{
    std::cout << "WrongCat Copy constructor" << std::endl;
	*this = src;
}

WrongCat &   WrongCat::operator=(WrongCat const &src)
{
    if (this != &src)
		this->type = src.type;
	return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Muuuu Muuuuu" << std::endl;
}
