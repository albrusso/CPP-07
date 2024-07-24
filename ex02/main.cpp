/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 23:55:35 by albrusso          #+#    #+#             */
/*   Updated: 2024/07/24 15:19:25 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main()
{
	try
	{
		Array <int> arr1;
		std::cout << "size arr1: " << arr1.size() << std::endl;

		Array<int> arr2(5);
		std::cout << "size arr2: " << arr2.size() << std::endl;
		for (unsigned int i = 0; i < arr2.size(); ++i)
			std::cout << "arr2[" << i << "] = " << arr2[i] << std::endl;
		for (unsigned int i = 0; i < arr2.size(); ++i)
			arr2[i] = i * 2;
		for (unsigned int i = 0; i < arr2.size(); ++i)
			std::cout << "arr2[" << i << "] = " << arr2[i] << std::endl;

		Array<int> arr3(arr2);
		std::cout << "size arr3 (copia di arr2): " << arr3.size() << std::endl;
		for (unsigned int i = 0; i < arr3.size(); ++i)
			arr3[i] = i * 3;
		for (unsigned int i = 0; i < arr3.size(); ++i)
			std::cout << "arr3[" << i << "] = " << arr3[i] << std::endl;
		std::cout << "Elementi di arr2 dopo la modifica di arr3:" << std::endl;
		for (unsigned int i = 0; i < arr2.size(); ++i)
			std::cout << "arr2[" << i << "] = " << arr2[i] << std::endl;

		Array<int> arr4;
		arr4 = arr2;
		std::cout << "size arr4 (assegnato da arr2): " << arr4.size() << std::endl;
		std::cout << "Elementi di arr4 dopo l'assegnazione:" << std::endl;
		for (unsigned int i = 0; i < arr4.size(); ++i)
			std::cout << "arr4[" << i << "] = " << arr4[i] << std::endl;
		try 
		{
			std::cout << arr2[10] << std::endl;
		}
		catch (const std::out_of_range& e)
		{
			std::cout << e.what() << std::endl;
		}

	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
