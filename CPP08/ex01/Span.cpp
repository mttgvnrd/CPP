/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:25:36 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/17 12:25:41 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){
}

Span::~Span(){
}

Span::Span(unsigned int newSize){
	v_stack.reserve(newSize);
}

Span::Span(const Span &src){
	v_stack = src.v_stack;
}

Span& Span::operator=(const Span &src){
	if (this != &src)
		v_stack = src.v_stack;
	return (*this);
}

int Span::shortestSpan() const{
	if (!v_stack.size())
		throw std::runtime_error("Container is empty");
	else if (v_stack.size() == 1)
		throw std::runtime_error("Found only one number in container");

	unsigned int span = UINT_MAX;
	std::vector<int> sorted(v_stack);
	std::sort(sorted.begin(), sorted.end());
	for (std::vector<int>::const_iterator it = sorted.begin(); it != sorted.end() - 1; ++it){
		if (static_cast<unsigned int>(*(it + 1) - *it) < (span))
			span = *(it + 1) - *it;
	}
	return span;
}
int Span::longestSpan() const{
	if (!v_stack.size())
		throw std::runtime_error("Container is empty");
	else if (v_stack.size() == 1)
		throw std::runtime_error("Found only one number in container");

	return *std::max_element(v_stack.begin(), v_stack.end()) - *std::min_element(v_stack.begin(), v_stack.end());
}

void Span::addNumber(const int newNbr){
	if (v_stack.size() >= v_stack.capacity())
		throw std::out_of_range("The container is full");
	v_stack.push_back(newNbr);
}

void Span::addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end) {
	std::vector<int>::iterator it = begin;
	if (v_stack.size() == v_stack.capacity())
		throw NoSpaceException();
	while (it != end)
	{
		v_stack.push_back(*it);
		if (v_stack.size() == v_stack.capacity())
			break;
		it++;
	}
}