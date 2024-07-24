/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albrusso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 20:29:26 by albrusso          #+#    #+#             */
/*   Updated: 2024/07/24 15:06:55 by albrusso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T& a, T& b)
{
	T c = a;
	a = b;
	b = c;
}

template <typename T>
T min(T a, T b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
T max(T a, T b)
{
	if (a < b)
		return b;
	else
		return a;
}

#endif