/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:21:52 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/27 14:21:54 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
    
    public:
        Dog();
        ~Dog();
        Dog(Dog const &src);
        Dog &   operator=(Dog const &src);

        void makeSound() const;
    
    private:
        Brain   *brain;
        std::string type;
};


#endif

