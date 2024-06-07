/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:33:22 by mgiovana          #+#    #+#             */
/*   Updated: 2024/04/04 15:33:24 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat Paolo ("Paolo", 3);
        std::cout << Paolo;
        std::cout << "Paolo got a promotion!" << std::endl;
        Paolo.incrementGrade();
	    std::cout << Paolo;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}