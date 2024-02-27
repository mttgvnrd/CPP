/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:54:40 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/21 15:54:42 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>


class ClapTrap
{
    protected:
            std::string _name;
            int         _hp;
            int         _ep;
            int         _ad;

    public:
            ClapTrap(const std::string& Name );
            ClapTrap(const ClapTrap& src);
            ~ClapTrap();

            ClapTrap& operator=(const ClapTrap& other);

            void attack(const std::string& target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);
            std::string GetName() const;
            
};

#endif