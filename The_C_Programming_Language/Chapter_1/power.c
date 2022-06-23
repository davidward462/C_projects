#include <stdio.h>

//1.7 functions

// declarations
int power(int m, int n);

int sign(int m); 

int main()
{
    //test

    for (int i = 0; i <= 10; ++i)
    {
        printf("%d: \t%d \t%d\n", i, power(16,i), power(-3,i));
    }

    return 0;
}

int sign(int value)
{
    if(value < 0)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

int power(int base, int n)
{
    int result = sign(base); // NOTE: if base < 0 then base^0 = -1

    for(int i = 1; i <= n; ++i)
    {
        result = result * base;
    }

    return result;
}