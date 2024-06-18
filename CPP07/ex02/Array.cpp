/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:01:19 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/11 15:01:20 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(): _size(0), _data(NULL) {}

template<typename T>
Array<T>::~Array() {
	delete [] this->_data;
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n), _data(new T[n]()) {}

template<typename T>
Array<T>::Array(const Array& other) : _size(other._size), _data(new T[other._size]())
{
    for ( int i = 0; i < _size; ++i) {
        _data[i] = other._data[i];
    }
}

template<typename T>
Array<T> &	Array<T>::operator=(Array<T> const &rSym) {
	if (this != &rSym) {
		delete [] this->_data;
		this->_data = new T[rSym._data];
		this->_data = rSym._data;
		for (int i = 0; i < rSym._data; i++)
			this->_data[i] = rSym._data[i];
	}
	return *this;
}
// Operatore di subscript
template<typename T>
T		Array<T>::operator[](int n) const 
{
	T	arr_pos;

	if (n > this->_size - 1)
		throw Array::OutOfBoundException();
	arr_pos = this->_data[n];
	return arr_pos;
}

template<typename T>
T &		Array<T>::operator[](int n) {
	if (n > this->_size - 1)
		throw Array::OutOfBoundException();
	return this->_data[n];
}

template<typename T>
int Array<T>::size() const {
        return _size;
}

template <class T>
const char* Array<T>::OutOfBoundException::what() const throw()
{
	return ("Value is out of bound.");
}