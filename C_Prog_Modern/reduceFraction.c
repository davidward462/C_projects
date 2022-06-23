#include <stdio.h>

int calcGcd(int m, int n); // greatest common divisor

int main()
{   
    int num, denom, gcd;
    printf("$ ");
    scanf("%d/%d", &num, &denom);
    
    gcd = calcGcd(num, denom);
    num /= gcd;
    denom /= gcd;
    printf("%d/%d", num, denom);

    return 0;
}

int calcGcd(int m, int n)
{
    int r;
    while(n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}