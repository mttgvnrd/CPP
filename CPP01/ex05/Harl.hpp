/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:49:09 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/08 14:49:10 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
    public:
    Harl(void);
    ~Harl(void);
    void complain( std::string level );

    private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
};




#endif