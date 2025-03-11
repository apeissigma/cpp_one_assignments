#ifndef ALGO_H_
#define ALGO_H_

#include "types.hpp"



unsigned long fibonacci(const unsigned long n)
{
    unsigned long a = 0, b = 1, c = 0;

    if (n == 0)
    {
        return 0;
    } 
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        for (unsigned long i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}


int linear_search(Array * a, const int target)
{
    for (size_t i = 0; i < (*a).len; i++)
    {
        if ((*a).data[i] == target)
        {
            return static_cast<int>(i);
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
