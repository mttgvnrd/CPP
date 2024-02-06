/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:43:06 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/05 15:43:08 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string _type;
    
    public:
        Weapon(std::string type);
        ~Weapon(void);
    
        std::string const & getType(void) const; // la & serve per passare un riferimento all oggetto
        void    setType(std::string type);
};


#endif