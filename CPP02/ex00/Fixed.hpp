/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:39:13 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/13 14:39:15 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

class FixedPN
{
    public:
        FixedPN();
        ~FixedPN();
        FixedPN(FixedPN& other);
        FixedPN& operator = (FixedPN& other);
        int getRawBits();
        void setRawBits(int const raw);

    private:
        int fixedPoint;
        static const int fractionalBits = 8;
};


#endif