/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:47:57 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/05 13:47:58 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Zombie
{
    public:
        Zombie(void);
        ~Zombie(void);
        void    announce(void);
        void    setName (std::string name);
    private:
        std::string _name;
};
    Zombie* zombieHorde( int number, std::string name );

#endif
