/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:24:09 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/05 15:24:11 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string* stringPTR = &brain;
    std::string& stringREF = brain;

    std::cout << "---Memory addresses---" << std::endl;
    std::cout << "Brain: "<< &brain << std::endl;
    std::cout << "stringPTR: "<<stringPTR << std::endl;
    std::cout << "stringREF: "<< &stringREF << std::endl;

    std::cout << "---Value---" << std::endl;
    std::cout << "Brain: "<< brain << std::endl;
    std::cout << "stringPTR: "<<*stringPTR << std::endl;
    std::cout << "stringREF: "<< stringREF << std::endl;

    return(0);
}