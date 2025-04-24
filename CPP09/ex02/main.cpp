/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:56:18 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/19 12:56:20 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool isValidInput(const char* input) {
    for (int i = 0; input[i] != '\0'; ++i) {
        if (!std::isdigit(input[i])) {
            return false;
        }
    }
    return true;
}

int main(int argc, char** argv) {
    if (argc < 3) {
        std::cerr << "Error, try ./sort [int sequence]" << std::endl;
        return 1;
    }

    std::vector<int> input;

    for (int i = 1; i < argc; ++i) {
        if (!isValidInput(argv[i])) {
            std::cerr << "Error: invalid input." << std::endl;
            return 1;
        }

        int number = std::atoi(argv[i]);
        if (number < 0) {
            std::cerr << "Error: negative number." << std::endl;
            return 1;
        }
        input.push_back(number);
    }

    std::cout << "Before: ";
    for (std::vector<int>::iterator it = input.begin(); it != input.end(); ++it) {
        std::cout << " " << *it;
    }
    std::cout << std::endl;

    PmergeMe instance(input, input.size());

    return 0;
}