#include "s_expr.h"

#include <iostream>

int fib(int n)
{
    return (n <= 2) ? 1 : fib(n - 1) + fib(n - 2);
}

int main()
{
    std::cout << S(fib, 5) << std::endl;
}

