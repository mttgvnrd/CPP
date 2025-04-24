/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:34:30 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/18 15:34:31 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <string>
#include <cstdlib>

class InsufficentNumbers : public std::exception {
        const char *what() const throw() {
            return "Error: not enough numbers";
        }
    };

    class InvalidToken: public std::exception {
        const char *what() const throw() {
            return "Error: invalid token, try (+ - * /)";
        }
    };

    class InvalidExpression: public std::exception {
        const char *what() const throw() {
            return "Error: invalid expression";
        }
    };

    class DivisionByZero : public std::exception {
        const char *what() const throw() {
            return "Error: Division by zero";
        }
    };

#endif