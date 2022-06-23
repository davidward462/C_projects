#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n)
{
    int divisor;
    
    if (n <= 1)
        return false;

    for(divisor = 2; divisor * divisor <= n; divisor++)
    {
        if (n % divisor == 0)
            return false;
    } 
    return true;
}

int main(void)
{
    int n, m;

    printf("$ ");
    scanf("%d %d",&n, &m);
    while(n <= m)
    {
        if(is_prime(n)) printf("%d\n",n);
        n++;
    }

    return 0;
}