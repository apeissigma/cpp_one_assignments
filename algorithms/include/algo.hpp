#ifndef ALGO_H_
#define ALGO_H_

#include "types.hpp"



long fibonacci(const int n)
{
    int a = 0, b = 1, c = 0;

    if (n > 0)
    {
        for (int i = 0; i < n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
    else
    {
        return 0;
    }
}


int linear_search(Array * a, const int target)
{
    for (size_t i = 0; i < (*a).len; i++)
    {
        if ((*a).data[i] == target)
        {
            return i;
        } 
    }
    return -1;
}


long factorial(const int n)
{ 
    if (n > 0)
    {
        int x = 1;
        for (int i = 1; i <= n; i++)
        {
            x *= i;
        }
        return x;
    }
    else
    {
        return 0;
    }
}

#endif // ALGO_H_
