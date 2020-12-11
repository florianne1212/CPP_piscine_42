/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 13:02:37 by fcoudert          #+#    #+#             */
/*   Updated: 2020/12/08 16:41:23 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"
#include <string>
#include <iostream>

int main(int argc, char**argv)
{
    if(argc != 2)
    {
        std::cout << "please give ONE argument to the program" << std::endl;
        return 0;
    }
    conversion to_convert(argv[1]);
    if(to_convert.try_to_convert() == 0)
    {
        std::cout << "invalid argument" << std::endl;
        return 0;
    }
    to_convert.to_char();
    to_convert.to_int();
    to_convert.to_float();
    to_convert.to_double();
    
}