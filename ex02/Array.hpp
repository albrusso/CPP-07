/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 23:35:48 by albrusso          #+#    #+#             */
/*   Updated: 2024/07/23 19:11:00 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
	private:
		T *_arr;
		unsigned int _size;
	public:
		Array(void);
		Array(unsigned int size);
		Array(const Array &copy);
		~Array(void);
		Array &operator=(const Array &a);
		T &operator[](int index);
		unsigned int size(void);
};

#include "Array.tpp"

#endif