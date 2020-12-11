/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identifier.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <fcoudert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:14:00 by fcoudert          #+#    #+#             */
/*   Updated: 2020/12/08 16:14:03 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identifer.hpp"

void identify_from_pointer(Base * p)
{
    A *a;
    B *b;
    C *c;

    if((a = dynamic_cast<A*>(p)) != NULL)
        std::cout << "A" << std::endl; 
    else if((b = dynamic_cast<B*>(p)) != NULL)
        std::cout << "B" << std::endl; 
    else if((c = dynamic_cast<C*>(p)) != NULL)
        std::cout << "C" << std::endl; 
    else
        std::cout << "Error not A, B or C" << std::endl;
    
}

void identify_from_reference( Base & p)
{
    identify_from_pointer(&p);
}