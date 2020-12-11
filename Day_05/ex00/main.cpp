#include "Bureaucrat.hpp"

int main ()
{
    std::cout << "\n---- ex00 ----\n" << std::endl;

    Bureaucrat Lisa("Lisa", 151);
    Bureaucrat Bart("Bart", 0);
    Bureaucrat Marge("Marge", 3);
    Bureaucrat Homer("Homer", 150);
    std::cout << Marge;

    std::cout << "\ndecrementing Marge : " << std::endl;
    Marge.decrement();
    std::cout << Marge;

    std::cout << "\nincrementing Marge : " << std::endl;
    Marge.increment();
    std::cout << Marge;

    std::cout << "\nincrementing Marge 3 times : " << std::endl;
    Marge.increment();
    std::cout << Marge;
    Marge.increment();
    std::cout << Marge;
    Marge.increment();

    std::cout << "\n";
    std::cout << Homer;
    std::cout << "\ndecrementing Homer: " << std::endl;
    Homer.decrement();
}