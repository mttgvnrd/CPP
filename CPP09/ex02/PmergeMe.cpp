/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:02:59 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/20 13:03:00 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::vector<int>& input, int size) : size(size) 
{
    vec.assign(input.begin(), input.end());
    deq.assign(input.begin(), input.end());

    vecSort();
    deqSort();
}

PmergeMe::PmergeMe(const PmergeMe& src) : size(src.size)
{
    vec = src.vec; 
    deq = src.deq;  
}

PmergeMe::~PmergeMe() {}

PmergeMe& PmergeMe::operator=(const PmergeMe& rSym)
{
    if (this != &rSym) {
        vec = rSym.vec; 
        deq = rSym.deq;  
    }
    return *this;
}

void PmergeMe::vecSort() {
    clock_t start = clock();

    size_t const halfsize = vec.size() / 2;

    std::vector<int> split_lo(vec.begin(), vec.begin() + halfsize);
    std::vector<int> split_hi(vec.begin() + halfsize, vec.end());

    std::sort(split_lo.begin(), split_lo.end());
    std::sort(split_hi.begin(), split_hi.end());

    split_lo.insert(split_lo.end(), split_hi.begin(), split_hi.end());
    std::sort(split_lo.begin(), split_lo.end());

    std::cout << "After: ";
    for (std::vector<int>::iterator it = split_lo.begin(); it != split_lo.end(); ++it) {
        std::cout << " " << *it;
    }
    std::cout << std::endl;

    clock_t end = clock();
    double duration_seconds = static_cast<double>(end - start) / CLOCKS_PER_SEC; //* 1000000
    std::cout << "Time to process a range of " << size << " elements with std::vector<int> : " << duration_seconds << " s" << std::endl;
}

void PmergeMe::deqSort() {
    clock_t start = clock();

    std::deque<int>::iterator it = deq.begin();
    std::deque<int>::iterator ite = deq.end();

    size_t const halfsize = deq.size() / 2;

    std::deque<int> first_half;
    std::deque<int> second_half;

    for (size_t i = 0; i < halfsize; ++i) {
        first_half.push_back(*it); 
        ++it;
    }

    for (; it != ite; ++it) {
        second_half.push_back(*it); 
    }

    std::sort(first_half.begin(), first_half.end());
    std::sort(second_half.begin(), second_half.end());

    first_half.insert(first_half.end(), second_half.begin(), second_half.end());
    std::sort(first_half.begin(), first_half.end());

    clock_t end = clock();
    double duration_seconds = static_cast<double>(end - start) / CLOCKS_PER_SEC;//* 1000000

    std::cout << "Time to process a range of " << size << " elements with std::deque<int> : " << duration_seconds << " s" << std::endl;
}
