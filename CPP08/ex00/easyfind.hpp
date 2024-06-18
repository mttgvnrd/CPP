/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:37:52 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/17 11:37:54 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <exception>

class NotFoundEx : public std::exception {
    public:
        const char* what() const throw() {
            return "Value not found in container";
        }
};

template <typename T>
typename T::iterator easyfind(T& container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end()) {
        throw NotFoundEx();
    }
    return it;
}

#endif