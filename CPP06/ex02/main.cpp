/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:06:00 by mgiovana          #+#    #+#             */
/*   Updated: 2024/06/06 12:06:01 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <cstdlib>


Base* generate()
{
    srand(static_cast<unsigned int>(time(0)));
    int random = rand() % 3;

    switch (random) {
        case 0: return new A();
        case 1: return new B();
        case 2: return new C();
    }
    return NULL;
}

//identifica il tipo dell'oggetto puntato usando dynamic_cast
static void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A identified 1" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B identified 1" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C identified 1" << std::endl;
    else
        std::cout << "Unknow type" << std::endl;
}

//identifica il tipo dell'oggetto referenziato usando 
//dynamic_cast e cattura delle eccezioni.
static void identify(Base& p)
{
    try {
        A& a = dynamic_cast<A&>(p);
        std::cout << "A identified 2" << std::endl;
        (void)a;
        return;
    } catch (const std::exception&) {}

    try {
        B& b = dynamic_cast<B&>(p);
        std::cout << "B identified 2" << std::endl;
        (void)b;
        return;
    } catch (const std::exception&) {}

    try {
        C& c = dynamic_cast<C&>(p);
        std::cout << "C identified 2" << std::endl;
        (void)c;
        return;
    } catch (const std::exception&) {}

    std::cout << "Unknown type" << std::endl;
}

int main() {
    Base* ptr = generate();
    identify(ptr);
    identify(*ptr);

    delete ptr;
    return 0;
}
