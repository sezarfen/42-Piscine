int fibonacci(int a)
{
    if (a == 1 || a == 2)
        return 1;
    else
        return fibonacci(a - 1) + fibonacci(a - 2);
}

int pow(int base, int p)
{
    if (p == 0)
        return 1;
    else if (p == 1)
        return base;
    else
        return pow(base , p - 1) * base;
}

int factorial(int n)
{
    if(n == 0)
        return 1;
    else
        return factorial(n-1) * n;
}

#include <stdio.h>
int main(void)
{
    for(int i = 1; i < 5; i++)
    {
        printf("%i\n" , factorial(i));
    }
    return (0);
}
