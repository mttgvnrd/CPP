/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:17:18 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/20 15:17:19 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

FixedPN::FixedPN(void) : fixedPoint(0)
{
    std::cout << "Default constructor called" << std::endl;
}

FixedPN::FixedPN(const int i)
{
    std::cout << "Int constructor called" << std::endl;
    fixedPoint = i << fractionalBits;
}

FixedPN::FixedPN(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    fixedPoint = (int)roundf(f * (1 << fractionalBits));
}

FixedPN::~FixedPN(void)
{
    std::cout << "Destructor called" << std::endl;
}

FixedPN::FixedPN( const FixedPN& other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixedPoint = other.getRawBits();
}

int    FixedPN::getRawBits() const
{
    //std::cout << "getRawBits member function called" <<std::endl;
    return fixedPoint;
}

void FixedPN::setRawBits(int const raw)
{
    fixedPoint = raw;
}

FixedPN& FixedPN::operator=(const FixedPN& other)
{   
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) 
        fixedPoint = other.getRawBits();    
    return *this;
}

float   FixedPN::toFloat() const
//operazione di shift a sinistra, che sposta i bit di un numero intero 
//a sinistra di n posizioni, equivalente a moltiplicare 
//per 2 alla potenza di fractionlBits
{
    return (float)fixedPoint / (1 << fractionalBits);
}


int     FixedPN::toInt() const
//converte un valore passato in bit in int
// L'operatore >> esegue uno shift a destra dei bit del valore 
// value dell'oggetto fixedPoint di fractionalBits posizioni.
{
    return (fixedPoint >> fractionalBits);
}

std::ostream& operator<<(std::ostream& os, const FixedPN& f)
//converte l'oggetto fixed in un valore di 
//tipo float utilizzando il metodo toFloat() della classe 
//FixedPN, quindi lo inserisce nello stream di output os.
{
	os << f.toFloat();
	return os;
}

//OVERLOAD  il quale converte gli oggetti in float prima
// di fare l operazione
FixedPN FixedPN::operator+(const FixedPN& add) const
{
	return FixedPN(toFloat() + add.toFloat());
}

FixedPN FixedPN::operator-(const FixedPN& sub) const
{
    return FixedPN(toFloat() - sub.toFloat());
}

FixedPN FixedPN::operator*(const FixedPN& mult) const
{
    return FixedPN(toFloat() * mult.toFloat());  
}

FixedPN FixedPN::operator/(const FixedPN& mult) const
{
    return FixedPN(toFloat() / mult.toFloat());
}

//OVERLOAD post-incremento
FixedPN FixedPN::operator++(int)
{
    FixedPN tmp(*this);
	fixedPoint++;
	return tmp;
}

//OVERLOAD pre-incremento
FixedPN& FixedPN::operator++(void)
{
	++fixedPoint;
	return *this;
}

//OVERLOAD post-decremento
FixedPN FixedPN::operator--(int)
{
    FixedPN tmp(*this);
	fixedPoint--;
	return tmp;
}

//OVERLOAD pre-decremento
FixedPN& FixedPN::operator--(void)
{
	--fixedPoint;
	return *this;
}

bool FixedPN::operator>(const FixedPN &cmp) const
{
    return (this->toFloat() > cmp.toFloat());
}

bool FixedPN::operator<(const FixedPN &cmp) const
{
    return (this->toFloat() < cmp.toFloat());
}

bool FixedPN::operator>=(const FixedPN &cmp) const
{
    return (this->toFloat() >= cmp.toFloat());
}

bool FixedPN::operator<=(const FixedPN &cmp) const
{
    return (this->toFloat() <= cmp.toFloat());
}

bool FixedPN::operator==(const FixedPN &cmp) const
{
    return (this->toFloat() == cmp.toFloat());
}

bool FixedPN::operator!=(const FixedPN &cmp) const
{
    return (this->toFloat() != cmp.toFloat());
}

//Per oggetti modificabili
FixedPN& FixedPN::min(FixedPN& x, FixedPN& y)
{
	return (x < y ? x : y);
}

FixedPN& FixedPN::max(FixedPN& x, FixedPN& y)
{
	return (x > y ? x : y);
}

//Per oggetti non modificabili
const FixedPN& FixedPN::min(const FixedPN& x, const FixedPN& y){
	return (x < y ? x : y);
}

const FixedPN& FixedPN::max(const FixedPN& x, const FixedPN& y){
	return (x > y ? x : y);
}