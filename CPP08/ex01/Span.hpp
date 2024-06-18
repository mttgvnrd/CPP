/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:25:30 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/17 12:25:32 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <limits.h>

class Span {
private:
    std::vector<int> v_stack;

public:
    Span();
    Span(unsigned int newSize); //costruttre con grandezza stack Nbr
    Span(const Span &copy);
    Span& operator=(const Span &copy);
    ~Span();

    void addNumber(const int newNbr);
    void addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end);

    int shortestSpan() const;
	int longestSpan() const;
    
    class NoSpaceException : public std::exception {
        const char *what() const throw() {
            return "Span is full, cannot add more numbers.";
        }
    };

    class NotEnoughNumbersException : public std::exception {
        const char *what() const throw() {
            return "Not enough numbers to find a span.";
        }
    };
};


#endif