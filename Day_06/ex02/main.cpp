/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <fcoudert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 15:13:36 by fcoudert          #+#    #+#             */
/*   Updated: 2020/12/08 15:59:56 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "identifer.hpp"

int main()
{
    
    A a;
    B b;
    C c;
    Base base;
    
    
    std::cout << "test identify from pointer :" << std::endl;
    identify_from_pointer(&a);
    identify_from_pointer(&b);
    identify_from_pointer(&c);
    identify_from_pointer(NULL);
    identify_from_pointer(&base);
    
    std::cout << "\ntest identify from reference :" << std::endl;
    identify_from_reference(a);
    identify_from_reference(b);
    identify_from_reference(c);
    identify_from_reference(base);

    
}