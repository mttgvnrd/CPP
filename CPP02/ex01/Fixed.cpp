/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:42:12 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/19 14:42:15 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

FixedPN::FixedPN(void) : fixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl;
}

FixedPN::FixedPN(const int i)
{
    std::cout << "Int constructor called" << std::endl;
    fixedPoint = i << fractionalBits;
}

FixedPN::FixedPN(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    fixedPoint = (int)roundf(f * (1 << fractionalBits));
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

void FixedPN::setRawBits(int const raw)
{
    fixedPoint = raw;
}

FixedPN& FixedPN::operator=(FixedPN& other)
{   
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) 
        fixedPoint = other.getRawBits();    
    return *this;
}

float   FixedPN::toFloat() const
{
    return (float)fixedPoint / (1 << fractionalBits);
}
