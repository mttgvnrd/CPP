/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:45:15 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/05 14:01:25 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "default Serializer constructor" << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "default Serializer destructor" << std::endl;
}

Serializer& Serializer::operator=(const Serializer& src)
{
    (void)src;
    return *this;
}


Serializer::Serializer(const Serializer& src)
{
    std::cout << "Serializer copy constructor called." << std::endl;
	*this = src;
}

uintptr_t Serializer::serialize(Data* ptr) 
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) 
{
    return reinterpret_cast<Data*>(raw);
}
