#ifndef ITER_H
# define ITER_H

#include <iostream>
#include <string>

template <typename T>
void iter(T *array, int length, void (*funct)(T const &))
{
    for (int i = 0; i < length; i++)
    {
        funct(array[i]);
    }
}

template <typename T>
void show(const T&  a)
{
    std::cout << a << " " ;
}

#endif