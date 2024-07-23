/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 23:55:35 by albrusso          #+#    #+#             */
/*   Updated: 2024/07/22 23:58:46 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
    try {
        // Test del costruttore senza parametri
        Array<int> arr1;
        std::cout << "Dimensione di arr1: " << arr1.size() << std::endl;

        // Test del costruttore con parametro unsigned int
        Array<int> arr2(5);
        std::cout << "Dimensione di arr2: " << arr2.size() << std::endl;

        // Test dell'operatore di sottoscrizione e inizializzazione di default
        for (unsigned int i = 0; i < arr2.size(); ++i) {
            std::cout << "arr2[" << i << "] = " << arr2[i] << std::endl;
        }

        // Modifica degli elementi di arr2
        for (unsigned int i = 0; i < arr2.size(); ++i) {
            arr2[i] = i * 2;
        }

        // Stampa degli elementi modificati di arr2
        for (unsigned int i = 0; i < arr2.size(); ++i) {
            std::cout << "arr2[" << i << "] = " << arr2[i] << std::endl;
        }

        // Test del costruttore di copia
        Array<int> arr3(arr2);
        std::cout << "Dimensione di arr3 (copia di arr2): " << arr3.size() << std::endl;

        // Modifica degli elementi di arr3 e verifica che arr2 non sia influenzato
        for (unsigned int i = 0; i < arr3.size(); ++i) {
            arr3[i] = i * 3;
        }

        std::cout << "Elementi di arr3 dopo la modifica:" << std::endl;
        for (unsigned int i = 0; i < arr3.size(); ++i) {
            std::cout << "arr3[" << i << "] = " << arr3[i] << std::endl;
        }

        std::cout << "Elementi di arr2 dopo la modifica di arr3:" << std::endl;
        for (unsigned int i = 0; i < arr2.size(); ++i) {
            std::cout << "arr2[" << i << "] = " << arr2[i] << std::endl;
        }

        // Test dell'operatore di assegnazione
        Array<int> arr4;
        arr4 = arr2;
        std::cout << "Dimensione di arr4 (assegnato da arr2): " << arr4.size() << std::endl;

        std::cout << "Elementi di arr4 dopo l'assegnazione:" << std::endl;
        for (unsigned int i = 0; i < arr4.size(); ++i) {
            std::cout << "arr4[" << i << "] = " << arr4[i] << std::endl;
        }

        // Test dell'eccezione out_of_range
        try {
            std::cout << arr2[10] << std::endl; // Questo dovrebbe lanciare un'eccezione
        } catch (const std::out_of_range& e) {
            std::cerr << "Eccezione catturata: " << e.what() << std::endl;
        }

    } catch (const std::exception& e) {
        std::cerr << "Eccezione: " << e.what() << std::endl;
    }

    return 0;
}
