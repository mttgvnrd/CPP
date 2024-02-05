/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:43:04 by mgiovana          #+#    #+#             */
/*   Updated: 2024/02/01 14:43:06 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

/* Differenza tra un allocazione sullo stack e sull heap
Pila (Stack):
    La pila è un'area di memoria gestita automaticamente dal programma.
    Viene utilizzata per variabili locali alle funzioni, i cui cicli di vita sono limitati a quella funzione.
    L'allocazione e la deallocazione della memoria sono rapide, poiché coinvolgono semplicemente spostare il puntatore della pila su e giù.
    Le variabili sulla pila vengono distrutte automaticamente quando la funzione in cui sono definite esce dallo stack (ad esempio, quando la funzione ritorna).

Heap:
    L'heap è un'area di memoria più grande e più flessibile.
    Viene utilizzata per l'allocazione di memoria dinamica, quando non si conosce a priori la dimensione o la durata di una variabile.
    L'allocazione e la deallocazione richiedono un po' più di tempo rispetto alla pila, poiché coinvolgono la ricerca di un blocco di memoria libero e la sua gestione esplicita.
    Le variabili sull'heap persistono finché non vengono esplicitamente deallocate.
*/

int main(int argc, char **argv)
{
    std::string     input;
    Zombie*         hZombie;

    (void)argv;
    if (argc > 1)
        return (1);
    while (!std::cin.eof())
    {
        std::cout << "--Enter the Zombie's name--" << std::endl;
        std::getline(std::cin, input);
        if (std::cin.eof())
			return (1);
        else if (!input.compare(""))
			std::cout << "Empty input" << std::endl;
		else
			break ;
    }
	std::cout << "---The dynamically allocated zombie---" <<std::endl;
	hZombie = newZombie(input);
	hZombie->announce();
	delete(hZombie);
    std::cout << "---The stack allocated zombie---" << std::endl;
	std::cout << "randomChump's zombie -> ";
	randomChump("Foo");
    return (0);
}