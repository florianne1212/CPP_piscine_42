#ifndef EASYFIND_H
# define EASYFIND_H

#include <algorithm>

template <typename T>
bool easyfind(T &container, int y)
{
    typename T::iterator ite ;
    ite =std::find(container.begin(), container.end(), y);
    if(ite == container.end())
        return false;
    return true;
}


#endif