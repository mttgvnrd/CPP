/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:17:07 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/20 15:17:09 by mgiovana         ###   ########.fr       */
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

        FixedPN operator+(const FixedPN& add) const;
        FixedPN operator-(const FixedPN& sub) const;
        FixedPN operator*(const FixedPN& mult) const;
        FixedPN operator/(const FixedPN& mult) const;

        FixedPN     operator++( int );
        FixedPN&    operator++(void);
        FixedPN     operator--( int );
        FixedPN&    operator--(void);

        bool    operator>(const FixedPN &cmp) const;
        bool    operator<(const FixedPN &cmp) const;
        bool    operator>=(const FixedPN &cmp) const;
        bool    operator<=(const FixedPN &cmp) const;
        bool    operator==(const FixedPN &cmp) const;
        bool    operator!=(const FixedPN &cmp) const;

        static FixedPN&         min(FixedPN& x, FixedPN& y);
        static FixedPN&         max(FixedPN& x, FixedPN& y);
        static const FixedPN&   min(const FixedPN& x, const FixedPN& y);
        static const FixedPN&   max(const FixedPN& x, const FixedPN& y);
        
        
        int     getRawBits() const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;

    private:
        int fixedPoint;
        static const int fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& os, const FixedPN& f);

#endif