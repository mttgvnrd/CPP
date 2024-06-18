/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:30:09 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/11 14:30:10 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.cpp"

int main() {
    // Test del costruttore senza parametri
    Array<int> emptyArray;
    std::cout << "Empty array size: " << emptyArray.size() << std::endl;

    // Test del costruttore con parametro unsigned int
    Array<int> arrayWithSize(5);
    std::cout << "Array with size 5: " << arrayWithSize.size() << std::endl;

    for ( int i = 0; i < arrayWithSize.size(); ++i) {
        arrayWithSize[i] = i * 2;
    }

    std::cout << "Elements in arrayWithSize: ";
    for ( int i = 0; i < arrayWithSize.size(); ++i) {
        std::cout << arrayWithSize[i] << " ";
    }
    std::cout << std::endl;

    // Test del costruttore di copia
    Array<int> copiedArray(arrayWithSize);
    std::cout << "Copied array size: " << copiedArray.size() << std::endl;

    std::cout << "Elements in copiedArray: ";
    for ( int i = 0; i < copiedArray.size(); ++i) {
        std::cout << copiedArray[i] << " ";
    }
    std::cout << std::endl;

    // Test dell'operatore di assegnazione
    Array<int> assignedArray = 7;//arrayWithSize;
    std::cout << "Assigned array size: " << assignedArray.size() << std::endl;

    std::cout << "Elements in assignedArray: ";
    for ( int i = 0; i < assignedArray.size(); ++i) {
        std::cout << assignedArray[i] << " ";
    }
    std::cout << std::endl;

    //accesso tramite operatore []
    std::cout << "arrayWithSize[2]: " << arrayWithSize[2] << std::endl;

    // Test delle eccezioni per accesso fuori dai limiti
    try {
        std::cout << assignedArray[10] << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
