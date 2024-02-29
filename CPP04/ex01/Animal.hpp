/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:21:36 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/27 14:21:37 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected: 
        std::string type;

    public:
        Animal();
        Animal(std::string type);
        virtual ~Animal();
        Animal(const Animal& src);
        Animal& operator=( const Animal& src);
        
    std::string getType() const;
    virtual void makeSound() const;

};

#endif