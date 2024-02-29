/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:22:03 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/27 14:22:04 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
    
    public:
        Cat();
        ~Cat();
        Cat(Cat const &src);
        Cat &   operator=(Cat const &src);

        void makeSound() const;

    private:
        Brain   *brain;
        std::string type;
};


#endif
