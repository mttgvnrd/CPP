/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:34:23 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/18 15:34:24 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) 
    {
        std::cerr << "Try: " << argv[0] << " \"number 1\" \"number 2\" \"operator\"" << std::endl;
        return 1;
    }

    std::istringstream input(argv[1]);
    std::stack<int> stack;
    std::string token;

    try
    {
        while (input >> token)
        {
            if (isdigit(token[0]))
                stack.push(std::atoi(token.c_str()));//stack.push per inserire in cima allo stack
            else if (token == "+" || token == "-" || token == "*" || token == "/") 
            {
                if (stack.size() < 2)
                    throw InsufficentNumbers();
                int b = stack.top(); //restituisce l elemento in cima allo stack senza rimuoverlo
                    stack.pop(); // stack.pop per rimuovere dalla cima
                int a = stack.top();
                    stack.pop();
                if (token == "+")
                    stack.push(a + b);
                else if (token == "-")
                    stack.push(a - b);
                else if (token == "*")
                    stack.push(a * b);
                else if (token == "/")
                {
                    if (b == 0)
                        throw DivisionByZero();
                    stack.push(a / b);
                }
            }
            else
                throw InvalidToken();
        }
        if (stack.size() != 1) {
            throw InvalidExpression();
        }
        std::cout << stack.top() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
