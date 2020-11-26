#include <iostream>
#include <fstream>
#include <string>

int check_empty(std::string str)
{
    if(str.empty())
    {
        std::cout << "one argument is empty check again" << std::endl ;
        return(1);
    }
}

int check_beginning(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "you need to give the filename and two strings as argument" << std::endl ;
        return(1);
    }

    std::string filename = argv[1];
    std::string string1 = argv[2];
    std::string string2 = argv[3];

    if (check_empty(filename) == 1 || check_empty(string1) == 1 || check_empty(string2) == 1)
        return(1);
    
    return(0);
}

int change(std::ifstream &ifs, std::string s1, std::string s2, std::string filename)
{
    std::string line;
    std::string name = filename + ".replace" ;
    std::ofstream ofs(name);
    std::size_t found;
    
    if(!(ofs))
    {
        std::cout << "error while trying to create the file" << std::endl ;
        return(1);
    }
    while (std::getline(ifs, line))
    {
        while(true)
        {
            found = line.find(s1);
            if (found!=std::string::npos)
                line.replace(found, s1.length() ,s2);
            else
                break;
        }
        ofs << line <<  std::endl ;
    }
    ofs.close();
    return(1);
}

int main(int argc, char *argv[])
{
    if (check_beginning(argc, argv) == 1)
        return(1);
    
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];    
    
    std::ifstream ifs(filename);
    if(!(ifs))
    {
        std::cout << "error while trying to open the file check the filename again" << std::endl ;
        return(1);
    }
    else
    {
        change(ifs, s1, s2, filename);
        ifs.close();
    }
}