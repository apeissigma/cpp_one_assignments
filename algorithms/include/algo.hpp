#ifndef ALGO_H_
#define ALGO_H_

#include "types.hpp"

int a = 0, b = 1, c = 0;

long fibonacci(const int n)
{
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
    return 0;
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
