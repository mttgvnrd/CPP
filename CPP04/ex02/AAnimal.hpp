/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbsAnimal.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:21:36 by mgiovana          #+#    #+#             */
/*   Updated: 2024/03/01 14:35:30 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
    protected: 
        std::string type;

    public:
        AAnimal();
        AAnimal(std::string type);
        virtual ~AAnimal();
        AAnimal(const AAnimal& src);
        AAnimal& operator=( const AAnimal& src);
        
    std::string getType() const;
    virtual void makeSound() const = 0;
    // const = 0; rende la funzione makeSound una funzione virtuale pura, 
    //il che rende la classe AAnimal una classe astratta che non può essere istanziata direttamente. 
    //Le classi derivate devono implementare makeSound per poter essere istanziate.
};

#endif
