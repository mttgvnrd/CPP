/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:33:12 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/26 16:33:13 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>


class FragTrap : public ClapTrap
{
    protected:
            std::string _name;
            int         _hp;
            int         _ep;
            int         _ad;

    public:
            FragTrap(const std::string& name );
            FragTrap(FragTrap const &src);
            ~FragTrap();

            FragTrap& operator=(const FragTrap& other);

            void highFivesGuys(void);
            
};

#endif