/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 21:19:56 by albrusso          #+#    #+#             */
/*   Updated: 2024/07/24 15:12:17 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template <typename T>
void print(const T& value)
{
	std::cout << value << std::endl;
}

int main() 
{
	int intArray[] = {1, 2, 3, 4, 5};
	std::size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);
	iter(intArray, intArrayLength, print<int>);

	double doubleArray[] = {1.1, 2.2, 3.3};
	std::size_t doubleArrayLength = sizeof(doubleArray) / sizeof(doubleArray[0]);
	iter(doubleArray, doubleArrayLength, print<double>);

	std::string stringArray[] = {"Hello", "World", "Test"};
	std::size_t stringArrayLength = sizeof(stringArray) / sizeof(stringArray[0]);
	iter(stringArray, stringArrayLength, print<std::string>);
	return 0;
}