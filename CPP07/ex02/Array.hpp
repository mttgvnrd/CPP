/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:30:42 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/11 14:30:43 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>
#include <string>
#include <cstdlib>

template <typename T>
class Array {
private:
    int _size;
    T* _data;

public:
    Array();
    ~Array();
    Array(unsigned int n);
    Array(const Array& other);
    Array& operator=(const Array& other);
    T		operator[](int n) const;
	T &		operator[](int n);
    int size() const;
    	
        
        class OutOfBoundException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

};

#endif

