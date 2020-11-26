#include <cctype>
#include <string>
#include <iostream>
#include <stdio.h>
#include <string.h>

int     main(int argc, char *argv[])
{
    if (argc <= 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else
    {
        for(int j = 1; j < argc; j++)
        {
            for(int i = 0; argv[j][i] != '\0'; i++)
            {  
                argv[j][i] = toupper(argv[j][i]);
            }
            std::cout << argv[j];
        }
    }
    std::cout << std::endl;
    return (0);
}