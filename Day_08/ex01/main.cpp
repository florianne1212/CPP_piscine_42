/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 11:19:00 by fcoudert          #+#    #+#             */
/*   Updated: 2020/12/11 18:53:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    srand(time(NULL));
    std::cout << "\nsubject test : " << std::endl;
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "\nmy test : " << std::endl;
    Span a = Span(1001);
    std::cout << "\ntrying to put 1002 element in a vector of size  : 1001"  << std::endl;
    try
    {
        a.addNumber(0, 1002);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "\ntrying to put 10001 element in a vector of size  : 10001"  << std::endl;
    a.addNumber(0, 1001);
    std::cout << "shortest Span : "<< a.shortestSpan() << std::endl;
    std::cout << "longest Span : " << a.longestSpan() << std::endl;
    Span b = Span(10);
    b.addNumber(60);
    std::cout << "\ntrying to put a vector with 6 elements in a vector of size  : 10"  << std::endl;
    std::vector<int> vect;
    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
    vect.push_back(40);
    vect.push_back(55);
    vect.push_back(57);
    b.addNumber(vect);
    std::cout << "shortest Span : "<< b.shortestSpan() << std::endl;
    std::cout << "longest Span : " << b.longestSpan() << std::endl;
    Span c = Span(5);
    std::cout << "\ntrying to know the shortest span in a vector with no value "  << std::endl;
    try
    {
        std::cout << "shortest Span : "<< c.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    c.addNumber(2);
    std::cout << "\ntrying to know the shortest span in a vector with 1 value "  << std::endl;
    try
    {
        std::cout << "shortest Span : "<< c.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    Span d = Span(1500);
    std::cout << "\ncreation of a vector of size 1500 filled with random  "  << std::endl;
    for (int i = 0; i < 1500; i++)
    {
        d.addNumber((rand() % 1000000));
    }
    std::cout << "shortest Span : "<< d.shortestSpan() << std::endl;
    std::cout << "longest Span : " << d.longestSpan() << std::endl;
    

    

    
}