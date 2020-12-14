/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <fcoudert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 13:16:20 by fcoudert          #+#    #+#             */
/*   Updated: 2020/12/11 15:38:33 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <string>
#include <iostream>

int main()
{
    std::list<int> lst1;

    lst1.push_back(1);
    lst1.push_back(4);
    lst1.push_back(10);

    std::list<int>::const_iterator it;
    std::cout << "printing list : " << std::endl;
    for (it = lst1.begin(); it != lst1.end(); it++)
        std::cout << *it << std::endl;
    
    std::cout << "\nsearching 4 in the list : " << std::endl;
    if (easyfind(lst1, 4) == true)
        std::cout << "value found !" << std::endl;
    else
        std::cout << "value not found" << std::endl;

    std::cout << "searching 2 in the list : " << std::endl;  
    if (easyfind(lst1, 2) == true)
        std::cout << "value found !" << std::endl;
    else
        std::cout << "value not found" << std::endl;

    std::vector<int>  vect;
    for (int i = 0; i < 9; i++)
        vect.push_back(i*2);
    std::vector<int>::const_iterator ite;
    std::cout << "\nprinting vector : " << std::endl;
    for (ite = vect.begin(); ite != vect.end(); ite++)
        std::cout << *ite << std::endl;
    
    std::cout << "\nsearching 12 in the vector : " << std::endl;
    if (easyfind(vect, 12) == true)
        std::cout << "value found !" << std::endl;
    else
        std::cout << "value not found" << std::endl;

    std::cout << "searching 7 in the vector : " << std::endl;  
    if (easyfind(vect, 7) == true)
        std::cout << "value found !" << std::endl;
    else
        std::cout << "value not found" << std::endl;
    
    
}