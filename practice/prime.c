#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int n)
{
    if (n < 2)
        return false;
    else
    {
        for(int i = n-1; i>1; i--)
        {
            if (n%i == 0)
            {
                return false;
            }
        }
        return true;
    }
}


void TestIsPrime(int max)
{
    for (int i = 0; i< max; i++)
    {
        if(IsPrime(i))
            printf("%d is prime\n", i);
        else
            printf("%d\n", i);
    }
}



int main(void)
{
    TestIsPrime(100);
    return 0;
}
