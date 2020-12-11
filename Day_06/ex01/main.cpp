/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoudert <fcoudert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 13:02:59 by fcoudert          #+#    #+#             */
/*   Updated: 2020/12/08 14:03:41 by fcoudert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <time.h>
#include <cstdlib>

struct Data {
    std::string s1;
    int n;
    std::string s2;
};

void * serialize(void)
{
    char *raw = new char[20];

    char alpha[]="abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char num[]="0123456789";
    for (size_t i = 0; i < 8; i++)
        raw[i] = alpha[rand() % (sizeof(alpha) - 1)];
    raw[8] = num[rand() % (sizeof(num) - 1)];
    for (size_t i = 9; i <= 16; i++)
        raw[i] = alpha[rand() % (sizeof(alpha) - 1)];
    raw[19] = '\0';
    return(raw);
}

Data * deserialize(void * raw)
{
    Data *dat = new Data;
    char *new_raw;
    
    new_raw = reinterpret_cast<char*>(raw);
    for (size_t i = 0; i < 8; i++)
        dat->s1 += new_raw[i];
    dat->n = (new_raw[8]);
    for (size_t i = 9; i <= 16; i++)
        dat->s2 += new_raw[i];
    return(dat);

}

int main()
{
    srand(time(NULL));

    void *raw;
    Data *dat;
    char *raw_char;
    
    raw = serialize();
    raw_char = (char *)raw;
    std::cout << "serialized data = " << raw_char << std::endl;
    std::cout << "serialized data random array of 8 alphanumerical characters = ";
    for (size_t i = 0; i < 8; i++)
        std::cout << raw_char[i];
    std::cout << "\nserialized data random integer = ";
    int n = raw_char[8];
    std::cout << n;
    std::cout << "\nserialized data random array of 8 alphanumerical characters = ";
    for (size_t i = 9; i <= 16; i++)
        std::cout << raw_char[i];
    
    dat = deserialize(raw);
    std::cout << "\nS1 = " << dat->s1 << std::endl;
    std::cout << "N = " << dat->n << std::endl;
    std::cout << "S2 = " << dat->s2 << std::endl;
}