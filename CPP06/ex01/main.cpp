/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:05:00 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/05 16:05:02 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data *data = new Data();
	data->intValue = 50;

	uintptr_t raw = Serializer::serialize(data);
	Data* serializedData = Serializer::deserialize(raw);

	std::cout << data << std::endl;
	std::cout << serializedData << std::endl;
	std::cout << serializedData->intValue << std::endl;
	
	delete data;
}
