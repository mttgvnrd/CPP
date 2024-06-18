/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:50:39 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/17 14:50:41 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef _MUTANTSTACK_HPP_
#define _MUTANTSTACK_HPP_

#include <iostream>
#include <string>
#include <stack>
#include <list>
#include <deque>

template<class T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack();
		MutantStack(MutantStack const &src);
		~MutantStack();
        MutantStack<T> &	operator=(MutantStack<T> const &src);

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	
    iterator begin();
	iterator end();
	const_iterator cbegin() const;
	const_iterator cend() const;
	reverse_iterator rbegin();
	reverse_iterator rend();
	const_reverse_iterator crbegin() const;
	const_reverse_iterator crend() const;

    private:
};

template<typename T>
MutantStack<T>::MutantStack() {}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &src) : std::stack<T>(src) {
}

template<typename T>
MutantStack<T>::~MutantStack() {
}

template<typename T>
MutantStack<T> &	MutantStack<T>::operator=(MutantStack<T> const &src) {
	if (this != &src) {

	}
	return *this;
}

template<class T> typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return this->c.begin();
}

template<class T> typename MutantStack<T>::iterator MutantStack<T>::end() {
	return this->c.end();
}

template<class T> typename MutantStack<T>::const_iterator MutantStack<T>::cbegin() const{
	return this->c.begin();
}

template<class T> typename MutantStack<T>::const_iterator MutantStack<T>::cend() const{
	return this->c.end();
}

template<class T> typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin(){
	return this->c.rbegin();
}

template<class T> typename MutantStack<T>::reverse_iterator MutantStack<T>::rend(){
	return this->c.rend();
}

template<class T> typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin() const {
	return this->c.rbegin();
}

template<class T> typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend() const {
	return this->c.rend();
}

#endif