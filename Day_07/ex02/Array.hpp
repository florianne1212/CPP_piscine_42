
#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <string>

template <typename T>
class Array
{
private:
   int  _size;
   T *_array;
public:
    Array():_size(0), _array(new T[0]) {};
    Array(int n):_size(n), _array(new T[n]) {};
    Array(Array const & copy) {
        this->operator= (copy);
    };
    ~Array() { delete[] this->_array;};

    Array & operator=(Array const & ope) {
        if (this != &ope)
        {
            delete[] this->_array;
            this->_size = ope._size;
            this->_array = new T[ope._size];
            for (size_t i = 0; i < ope._size; i++)
                this->_array[i] = ope._array[i];
        }
        return (*this);
    };

    int size() const
    {
        return _size;
    };

    class Outsidearray : public std::exception
    {
        public:
            Outsidearray() throw () {};
            ~Outsidearray() throw () {};
            Outsidearray(Outsidearray const &) {};
            Outsidearray & operator=(Outsidearray const &) {};
            virtual const char* what() const throw() { return "Error : trying to access value outside of the array !";};
    };

    T & operator[](int i) {
        if (i < 0 || i > (_size-1))
            throw Array::Outsidearray();
        else
            return(_array[i]);
    };

};

#endif