/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <fcoudert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 10:15:45 by fcoudert          #+#    #+#             */
/*   Updated: 2020/12/11 09:08:52 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    std::cout << "       Array of int      " << std::endl;
    Array<int> array_of_int(5);
    std::cout << "size of array =" << array_of_int.size() << std::endl;
    std::cout << "filling array with values ..." << std::endl;
    for (int i = 0; i < array_of_int.size(); i++)
        array_of_int[i] = i;
    std::cout << "printing values :" << std::endl;
    for (int i = 0; i < array_of_int.size(); i++)
        std::cout << array_of_int[i];
    std::cout << "\ntrying to access value 7 in an array of size : "<< array_of_int.size() << std::endl;
    try
    {
        array_of_int[7] = 8;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "\n       Array of string      " << std::endl;
    Array<std::string> array_of_string(8);
    std::cout << "size of array =" << array_of_string.size() << std::endl;
    std::cout << "filling array with values ..." << std::endl;
    for (int i = 0; i < array_of_string.size(); i++)
        array_of_string[i] = "test";
    std::cout << "printing values :" << std::endl;
    for (int i = 0; i < array_of_string.size(); i++)
        std::cout << array_of_string[i] << " ";
    std::cout << "\ntrying to access value -1 in an array of size : "<< array_of_int.size() << std::endl;
    try
    {
        array_of_string[-1] = "here";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "\n       Array of double      " << std::endl;
    Array<double> array_of_double(8);
    std::cout << "size of array = " << array_of_double.size() << std::endl;
    std::cout << "filling array with values ..." << std::endl;
    for (int i = 0; i < array_of_double.size(); i++)
        array_of_double[i] = 1.22*i;
    std::cout << "printing values :" << std::endl;
    for (int i = 0; i < array_of_double.size(); i++)
        std::cout << array_of_double[i] << " ";

        
    
        
    
}