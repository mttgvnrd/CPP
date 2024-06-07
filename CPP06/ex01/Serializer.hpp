/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:45:20 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/05 14:01:51 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

class Serializer {
	public:
    	static uintptr_t serialize(Data* ptr);
    	static Data* deserialize(uintptr_t raw);

	private:
    	Serializer();
    	~Serializer();
   		Serializer(const Serializer& src);
		Serializer& operator=(const Serializer& src);
};

#endif

