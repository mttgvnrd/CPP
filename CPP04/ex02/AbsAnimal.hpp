/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbsAnimal.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:21:36 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/29 16:09:51 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABSANIMAL_HPP
#define ABSANIMAL_HPP

#include <iostream>
#include <string>

class AbsAnimal
{
    protected: 
        std::string type;

    public:
        AbsAnimal();
        AbsAnimal(std::string type);
        virtual ~AbsAnimal();
        AbsAnimal(const AbsAnimal& src);
        AbsAnimal& operator=( const AbsAnimal& src);
        
    std::string getType() const;
    virtual void makeSound() const;

};

#endif
