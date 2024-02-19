/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:39:19 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/13 14:39:21 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

FixedPN::FixedPN(void) : fixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl;
}

FixedPN::~FixedPN(void)
{
    std::cout << "Destructor called" << std::endl;
}

FixedPN::FixedPN(FixedPN& other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixedPoint = other.getRawBits();
}

int    FixedPN::getRawBits()
{
    std::cout << "getRawBits member function called" <<std::endl;
    return fixedPoint;
}

FixedPN& FixedPN::operator=(FixedPN& other)
{   
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) 
        fixedPoint = other.getRawBits();    
    return *this;
}