#ifndef SPAN_H
# define SPAN_H

#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <time.h>
#include <cstdlib>

class Span
{
private:
    std::vector<int> _vector;
    unsigned int _n;
public:
    Span();
    Span(unsigned int N);
    Span(Span const & copy);
    ~Span();

    Span & operator=(Span const & ope);

    void addNumber(int x);
    void addNumber(const std::vector<int> &num);
    void addNumber(int begin, int end);
    int shortestSpan();
    int longestSpan();

    class NoSpaceLeft : public std::exception
    {
        public:
            NoSpaceLeft() throw ();
            ~NoSpaceLeft() throw ();
            NoSpaceLeft(NoSpaceLeft const & copy);
            NoSpaceLeft & operator=(NoSpaceLeft const & ope);
            virtual const char* what() const throw();
    };

    class TooFewElements : public std::exception
    {
        public:
            TooFewElements() throw ();
            ~TooFewElements() throw ();
            TooFewElements(TooFewElements const & copy);
            TooFewElements & operator=(TooFewElements const & ope);
            virtual const char* what() const throw();
    };

    class ErrorArgument: public std::exception
    {
        public:
            ErrorArgument() throw () ;
            ~ErrorArgument() throw () ;
            ErrorArgument(ErrorArgument const & copy);
            ErrorArgument & operator=(ErrorArgument const & ope) ;
            virtual const char* what() const throw() ;
    };

};

#endif