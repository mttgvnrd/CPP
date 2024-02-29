/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:22:58 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/27 14:22:59 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:
    
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(WrongCat const &src);
        WrongCat &   operator=(WrongCat const &src);

        void makeSound() const;
    private:
        std::string type;
};

#endif
