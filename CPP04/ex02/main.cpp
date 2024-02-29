/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:20:30 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/27 14:20:32 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"


int	main() {
	Animal	*array[100];
	int		i = 0;

	while (i < 50)
		array[i++] = new Dog();
	while (i < 100)
		array[i++] = new Cat();
	std::cout << "---------Random pick---------" << std::endl;
	array[22]->makeSound();
	array[89]->makeSound();
	for (i = 0; i < 100; i++)
        delete array[i];
		
	return 0;
}


/*
int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;

return 0;
}
*/