/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:42:04 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/19 14:42:06 by mgiovana         ###   ########.fr       */
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
        FixedPN(const int i);
        FixedPN(const float f);
        ~FixedPN();
        FixedPN(const FixedPN& other);
        FixedPN& operator = (const FixedPN& other);

        int getRawBits() const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

    private:
        int fixedPoint;
        static const int fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& os, const FixedPN& f);

#endif