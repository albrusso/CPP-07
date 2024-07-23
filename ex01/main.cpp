/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 21:19:56 by albrusso          #+#    #+#             */
/*   Updated: 2024/07/22 21:31:05 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template <typename T>
void print(const T& value) {
    std::cout << value << " ";
}

// Funzione template per incrementare un valore
template <typename T>
void increment(T& value) {
    ++value;
}

// Funzione template per stampare un valore con un prefisso
template <typename T>
void printWithPrefix(const T& value) {
    std::cout << "Value: " << value << std::endl;
}

int main() {
    // Test con array di interi
    int intArray[] = {1, 2, 3, 4, 5};
    std::size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Test con array di interi:" << std::endl;
    iter(intArray, intArrayLength, print<int>);
    std::cout << std::endl;

    // Modificare gli elementi e ristampare
    iter(intArray, intArrayLength, increment<int>);
    std::cout << "Dopo incrementare gli elementi:" << std::endl;
    iter(intArray, intArrayLength, print<int>);
    std::cout << std::endl;

    // Test con array di double
    double doubleArray[] = {1.1, 2.2, 3.3};
    std::size_t doubleArrayLength = sizeof(doubleArray) / sizeof(doubleArray[0]);

    std::cout << "Test con array di double:" << std::endl;
    iter(doubleArray, doubleArrayLength, print<double>);
    std::cout << std::endl;

    // Test con array di stringhe
    std::string stringArray[] = {"Hello", "World", "Test"};
    std::size_t stringArrayLength = sizeof(stringArray) / sizeof(stringArray[0]);

    std::cout << "Test con array di stringhe:" << std::endl;
    iter(stringArray, stringArrayLength, print<std::string>);
    std::cout << std::endl;

    return 0;
}