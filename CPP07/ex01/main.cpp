/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:34:54 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/06 15:34:56 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void iter(T *address, int length, void (*fct)(T& var))
{
    for (int i = 0; i < length; i++)
        fct(address[i]);
}

template<typename T>
void printChar(T &str)
{
    std::cout << str << std::endl;
}

int main()
{
    char test_1[] = {'r', 'o', 's', 's' ,'o' };

    iter(test_1, 5 , printChar<char>);
}

