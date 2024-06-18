/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:25:23 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/17 12:25:25 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    // primo test main
    try 
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "1 Shortest: " <<sp.shortestSpan() << std::endl;
        std::cout << "1 Longest: " <<sp.longestSpan() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    // secondo test full
    try
	{
		Span sp2(0);
        sp2.addNumber(10);
        std::cout << "2 Shortest: " <<sp2.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    // terzo test 10000
    try
	{
		Span sp3(10000);
		std::vector<int> v;
		for (int i = 0; i < 10000; i++)
			v.push_back(i);
		sp3.addNumber(v.begin(), v.end());
        std::cout << "3 Shortest: " <<sp3.shortestSpan() << std::endl;
        std::cout << "3 Longest: " <<sp3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


    return 0;
}