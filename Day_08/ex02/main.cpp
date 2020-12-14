/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <fcoudert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 16:22:30 by fcoudert          #+#    #+#             */
/*   Updated: 2020/12/11 18:44:19 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <list>

int main()
{
    std::cout << "\nsubject test : " << std::endl;
    MutantStack<int>    mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while(it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    
    std::cout << "\nmy test : " << std::endl;

    MutantStack<int> mylist;
    mylist.push(75);
    mylist.push(23);
    mylist.push(65);
    mylist.push(42);
    mylist.push(13);

    std::cout << "mylist contains: \n";
    for (MutantStack<int>::const_iterator it = mylist.begin() ; it != mylist.end(); it++)
        std::cout << ' ' << *it << std::endl ;
    std::cout << "mylist contains in reverse : \n";
    for (MutantStack<int>::reverse_iterator it = mylist.rbegin() ; it != mylist.rend(); it++)
        std::cout << ' ' << *it << std::endl ;
    std::cout << "changing all the value to 10 : \n";
    for (MutantStack<int>::reverse_iterator it = mylist.rbegin() ; it != mylist.rend(); it++)
    {
        *it = 10 ;
        std::cout << ' ' << *it << std::endl ;
    }
    std::cout << "changing all the value to 12 : \n";
    for (MutantStack<int>::iterator it = mylist.begin() ; it != mylist.end(); it++)
    {
        *it = 12 ;
        std::cout << ' ' << *it << std::endl ;
    }
    return 0;
}