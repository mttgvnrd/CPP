/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:55:29 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/03 15:55:30 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"

int main(int argc, char **argv) 
{
    if (argc != 2)
    {
         std::cout << "Error, 2 args needed" << std::endl;
         return 0;
    }
    ScalarConverter::converter(argv[1]);
    return 0;
}
