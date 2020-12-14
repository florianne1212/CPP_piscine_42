/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <fcoudert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 09:39:41 by fcoudert          #+#    #+#             */
/*   Updated: 2020/12/11 08:45:24 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <string>

int main()
{
    std::cout << "\nsubject test : " << std::endl;
    
    int a = 2;
    int b = 3;
    
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    
    std::cout << "\nmy test : " << std::endl;
    a = 10;
    b = 15;
    float e = 42.5;
    float f = 12.2;

    std::cout << "a = " << a << " b = " << b << std::endl;
    std::cout << "max between a and b is : ";
    std::cout << max(a, b) << std::endl;
    std::cout << "min between a and b is : ";
    std::cout << min(a, b) << std::endl;
    std::cout << "call to function swap ... " << std::endl;
    swap(a, b);
    std::cout << "a = " << a << " b = " << b << std::endl;

    std::cout << "\ne = " << e << " f = " << f << std::endl;
    std::cout << "max between a and b is : ";
    std::cout << max<float>(e, f) << std::endl;
    std::cout << "min between a and b is : ";
    std::cout << min<float>(e, f) << std::endl;
    std::cout << "call to function swap ... " << std::endl;
    swap<float>(e, f);
    std::cout << "e = " << e << " f= " << f << std::endl; 
}