/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:50:18 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/17 14:50:19 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <vector>

template<typename Container>
void printContainer(const Container& container) {
    typename Container::const_iterator it;
    for (it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << std::endl;
    }
}

int main() {
    MutantStack<int> mstack;
    std::vector<int> v_numbers;
    v_numbers.push_back(5);
    v_numbers.push_back(17);
    v_numbers.push_back(3);
    v_numbers.push_back(5);
    v_numbers.push_back(737);
    v_numbers.push_back(0);
    std::cout << "MutantStack" << std::endl;
    for (size_t i = 0; i < v_numbers.size(); ++i)
        mstack.push(v_numbers[i]);
    MutantStack<int>::iterator it;
    for (it = mstack.begin(); it != mstack.end(); ++it)
        std::cout << *it << std::endl;
    std::cout << "Test using list" << std::endl;
    std::list<int> lst(mstack.begin(), mstack.end());
    printContainer(lst);

    return 0;
}
